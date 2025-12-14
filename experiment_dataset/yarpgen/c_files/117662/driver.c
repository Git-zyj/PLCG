#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -815149497;
int var_4 = -751441850;
unsigned short var_5 = (unsigned short)39947;
short var_7 = (short)9562;
signed char var_8 = (signed char)-81;
int zero = 0;
unsigned long long int var_11 = 3214598569001559577ULL;
int var_12 = 1648602194;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1370619337453248003LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

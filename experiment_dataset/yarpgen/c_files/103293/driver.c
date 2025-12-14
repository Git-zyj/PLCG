#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1134054056470487233LL;
unsigned short var_8 = (unsigned short)43941;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 3693670165877145476LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)64886;
unsigned short var_13 = (unsigned short)31748;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

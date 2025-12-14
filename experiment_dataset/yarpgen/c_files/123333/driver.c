#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 314069102023828863ULL;
unsigned char var_7 = (unsigned char)103;
unsigned short var_9 = (unsigned short)1656;
signed char var_11 = (signed char)90;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6492649825063294679LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

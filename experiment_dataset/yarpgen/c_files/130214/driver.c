#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3100;
unsigned long long int var_3 = 12344169542922300887ULL;
unsigned long long int var_11 = 2579129907410820641ULL;
_Bool var_15 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 6432586872964026734ULL;
unsigned short var_20 = (unsigned short)33361;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

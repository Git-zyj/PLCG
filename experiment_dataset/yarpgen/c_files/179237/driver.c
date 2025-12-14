#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1453868943;
unsigned long long int var_2 = 13271588950248833283ULL;
unsigned long long int var_3 = 9161086340957090507ULL;
unsigned int var_5 = 431859210U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)2;
unsigned long long int var_9 = 11383591430380872865ULL;
short var_10 = (short)-1966;
int zero = 0;
unsigned short var_11 = (unsigned short)14537;
_Bool var_12 = (_Bool)1;
int var_13 = -680524621;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

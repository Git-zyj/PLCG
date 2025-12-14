#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)21521;
unsigned int var_9 = 517455273U;
signed char var_15 = (signed char)94;
int zero = 0;
unsigned long long int var_17 = 15429376191977213405ULL;
short var_18 = (short)24491;
unsigned long long int var_19 = 11975449044005401395ULL;
_Bool var_20 = (_Bool)0;
int var_21 = -2095809673;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

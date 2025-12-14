#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15473;
unsigned short var_4 = (unsigned short)1178;
short var_7 = (short)19293;
_Bool var_8 = (_Bool)0;
unsigned char var_15 = (unsigned char)252;
int zero = 0;
unsigned short var_17 = (unsigned short)41853;
long long int var_18 = -7626894382327142948LL;
unsigned long long int var_19 = 8999927757449855806ULL;
long long int var_20 = 910268041422947219LL;
short var_21 = (short)-31449;
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

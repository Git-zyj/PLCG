#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24228;
unsigned short var_2 = (unsigned short)15984;
int var_5 = -712503276;
unsigned long long int var_8 = 4039373693113928254ULL;
long long int var_9 = 7062708927647600487LL;
unsigned short var_10 = (unsigned short)6243;
unsigned short var_15 = (unsigned short)57515;
short var_16 = (short)7344;
int zero = 0;
unsigned long long int var_17 = 1987369211786794313ULL;
short var_18 = (short)-6961;
long long int var_19 = 3511437496618297859LL;
short var_20 = (short)3330;
int var_21 = -2031970492;
unsigned short var_22 = (unsigned short)1979;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

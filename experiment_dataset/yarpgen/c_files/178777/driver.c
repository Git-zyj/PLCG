#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
short var_3 = (short)-5662;
unsigned short var_4 = (unsigned short)53644;
unsigned char var_8 = (unsigned char)136;
unsigned short var_12 = (unsigned short)36943;
short var_15 = (short)21265;
unsigned char var_17 = (unsigned char)248;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
long long int var_19 = 5680015396227698947LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4428292624669338293LL;
void init() {
}

void checksum() {
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

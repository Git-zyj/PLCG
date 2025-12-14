#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9655975942005684436ULL;
int var_9 = 625416834;
unsigned char var_10 = (unsigned char)243;
unsigned char var_11 = (unsigned char)32;
short var_13 = (short)7180;
unsigned long long int var_15 = 11253618467503144545ULL;
int zero = 0;
long long int var_18 = 7157194424979265530LL;
unsigned long long int var_19 = 15996280974841625840ULL;
unsigned char var_20 = (unsigned char)90;
unsigned char var_21 = (unsigned char)144;
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

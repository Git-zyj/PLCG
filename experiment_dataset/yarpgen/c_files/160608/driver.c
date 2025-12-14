#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
int var_2 = -1246005231;
unsigned char var_4 = (unsigned char)124;
unsigned char var_5 = (unsigned char)105;
unsigned long long int var_6 = 12912261675360617088ULL;
unsigned char var_7 = (unsigned char)207;
unsigned long long int var_9 = 10188916209827989134ULL;
unsigned int var_10 = 2795633927U;
unsigned char var_11 = (unsigned char)71;
int var_12 = 1069806963;
int var_14 = -788005394;
int var_15 = 1473255009;
int var_16 = 885261625;
unsigned char var_17 = (unsigned char)233;
int zero = 0;
int var_18 = -109328281;
int var_19 = -1182264173;
unsigned char var_20 = (unsigned char)187;
unsigned long long int var_21 = 9387701768620112388ULL;
int var_22 = -683385227;
void init() {
}

void checksum() {
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

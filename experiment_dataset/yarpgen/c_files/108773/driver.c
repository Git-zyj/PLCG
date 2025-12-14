#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 680500898;
unsigned char var_2 = (unsigned char)213;
int var_4 = 860605841;
short var_5 = (short)8486;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1325359475759672310ULL;
int var_8 = -1712986713;
int var_9 = 951383916;
long long int var_10 = -9127016273169056505LL;
int var_11 = -1304875368;
unsigned long long int var_12 = 13428754675548445411ULL;
long long int var_13 = -4896966458855394042LL;
unsigned short var_16 = (unsigned short)40704;
int zero = 0;
long long int var_17 = -7382711123448944930LL;
unsigned char var_18 = (unsigned char)146;
unsigned char var_19 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

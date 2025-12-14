#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29635;
unsigned long long int var_7 = 6366631727718428763ULL;
unsigned long long int var_8 = 17301733909539059382ULL;
int var_9 = 1229658315;
int var_10 = -573705476;
int var_12 = -710236831;
unsigned char var_13 = (unsigned char)232;
int var_15 = 1207198158;
unsigned short var_16 = (unsigned short)21474;
int zero = 0;
short var_17 = (short)3865;
unsigned long long int var_18 = 5575647047136593799ULL;
short var_19 = (short)5662;
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

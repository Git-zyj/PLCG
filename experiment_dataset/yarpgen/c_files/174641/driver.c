#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
signed char var_4 = (signed char)-4;
unsigned int var_7 = 1551778047U;
unsigned char var_8 = (unsigned char)120;
signed char var_9 = (signed char)102;
unsigned long long int var_11 = 8486730749133434624ULL;
int var_12 = 586917599;
short var_14 = (short)-2362;
int zero = 0;
unsigned long long int var_15 = 13946132652118750517ULL;
unsigned long long int var_16 = 12040562068103343326ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8715187615155161707LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

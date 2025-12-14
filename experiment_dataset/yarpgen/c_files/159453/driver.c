#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1670966167;
int var_1 = 851639362;
int var_2 = 1255076513;
signed char var_3 = (signed char)-47;
unsigned char var_4 = (unsigned char)173;
unsigned short var_6 = (unsigned short)38109;
int var_10 = -1646855972;
int zero = 0;
long long int var_11 = -2567646587405433562LL;
short var_12 = (short)15568;
signed char var_13 = (signed char)-32;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-43;
short var_3 = (short)21241;
long long int var_4 = -9109304222377014719LL;
long long int var_6 = 1169788085968367887LL;
unsigned short var_7 = (unsigned short)56471;
int var_8 = -1911737476;
int zero = 0;
short var_10 = (short)17869;
int var_11 = 1854877313;
unsigned char var_12 = (unsigned char)167;
short var_13 = (short)-25132;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

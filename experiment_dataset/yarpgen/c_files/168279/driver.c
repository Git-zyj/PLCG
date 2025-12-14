#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)216;
unsigned char var_3 = (unsigned char)152;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)215;
unsigned long long int var_8 = 7768725108657654927ULL;
unsigned long long int var_9 = 2929619061790417122ULL;
unsigned int var_10 = 2168840888U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29503;
int zero = 0;
unsigned long long int var_13 = 9380313215614567520ULL;
unsigned char var_14 = (unsigned char)107;
unsigned int var_15 = 1203048636U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

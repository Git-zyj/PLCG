#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3673258839U;
unsigned long long int var_4 = 10995139300269645860ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)131;
unsigned char var_17 = (unsigned char)150;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2685528355U;
unsigned short var_22 = (unsigned short)32399;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3836476554U;
unsigned long long int var_1 = 15047613401569265961ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)134;
unsigned long long int var_5 = 17727371726704257142ULL;
unsigned int var_8 = 2277360120U;
unsigned char var_10 = (unsigned char)230;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1141726945U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 2276300763591182555ULL;
unsigned int var_15 = 3662858792U;
void init() {
}

void checksum() {
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

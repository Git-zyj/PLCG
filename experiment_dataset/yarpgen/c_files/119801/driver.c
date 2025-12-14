#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3124493722U;
signed char var_3 = (signed char)72;
unsigned char var_7 = (unsigned char)40;
int var_10 = 1208821544;
signed char var_12 = (signed char)83;
int var_14 = 1304580285;
unsigned char var_15 = (unsigned char)220;
int zero = 0;
signed char var_16 = (signed char)-9;
unsigned char var_17 = (unsigned char)191;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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

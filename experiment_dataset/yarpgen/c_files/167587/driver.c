#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1349344899U;
unsigned int var_2 = 3100180083U;
signed char var_3 = (signed char)-27;
long long int var_4 = 236433115996608079LL;
unsigned char var_6 = (unsigned char)1;
unsigned short var_9 = (unsigned short)24909;
int zero = 0;
unsigned int var_11 = 2299235916U;
unsigned short var_12 = (unsigned short)11348;
unsigned char var_13 = (unsigned char)130;
unsigned short var_14 = (unsigned short)51140;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

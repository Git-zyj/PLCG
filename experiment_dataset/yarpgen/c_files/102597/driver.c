#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8011389169487108308ULL;
short var_7 = (short)-27605;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)40165;
unsigned char var_12 = (unsigned char)150;
int zero = 0;
short var_14 = (short)-1623;
short var_15 = (short)-3820;
int var_16 = 1959465963;
unsigned int var_17 = 167359919U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

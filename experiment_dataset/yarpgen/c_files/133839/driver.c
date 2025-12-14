#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
int var_2 = 1758889257;
unsigned long long int var_3 = 14511330404972924584ULL;
long long int var_4 = 6073952334891731586LL;
int var_7 = -160353221;
unsigned short var_9 = (unsigned short)35754;
signed char var_10 = (signed char)-83;
int zero = 0;
unsigned short var_11 = (unsigned short)39257;
int var_12 = -663239231;
int var_13 = -827811565;
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

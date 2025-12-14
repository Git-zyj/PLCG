#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 425783092613603539LL;
unsigned char var_4 = (unsigned char)84;
signed char var_6 = (signed char)-97;
unsigned int var_15 = 3515186519U;
int zero = 0;
short var_16 = (short)-27085;
unsigned long long int var_17 = 4772957420671533356ULL;
void init() {
}

void checksum() {
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

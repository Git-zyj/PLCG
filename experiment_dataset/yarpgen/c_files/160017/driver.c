#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
signed char var_3 = (signed char)-1;
unsigned short var_5 = (unsigned short)26390;
unsigned long long int var_9 = 10997881450298633576ULL;
int zero = 0;
unsigned long long int var_10 = 1586012822911570938ULL;
unsigned int var_11 = 1260115473U;
unsigned char var_12 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

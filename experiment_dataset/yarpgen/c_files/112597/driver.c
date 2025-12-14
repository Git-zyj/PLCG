#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)73;
long long int var_6 = -5720994378379445232LL;
int var_8 = -1260011307;
signed char var_10 = (signed char)-23;
signed char var_13 = (signed char)-35;
unsigned char var_17 = (unsigned char)121;
int zero = 0;
unsigned int var_19 = 2697425294U;
signed char var_20 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19304;
unsigned char var_9 = (unsigned char)245;
long long int var_10 = -3827738378521230054LL;
signed char var_11 = (signed char)-121;
unsigned int var_12 = 3804047636U;
long long int var_16 = -6968612866933039394LL;
int zero = 0;
unsigned long long int var_18 = 17993319403578663778ULL;
unsigned short var_19 = (unsigned short)12033;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

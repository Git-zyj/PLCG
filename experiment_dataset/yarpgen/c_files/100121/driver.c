#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6158534729770903458LL;
unsigned long long int var_3 = 7633867383235527157ULL;
long long int var_8 = -589088459481223076LL;
int var_10 = 654941436;
long long int var_17 = -5509905269395114479LL;
signed char var_19 = (signed char)-17;
int zero = 0;
unsigned char var_20 = (unsigned char)213;
int var_21 = -1298799782;
unsigned short var_22 = (unsigned short)34820;
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

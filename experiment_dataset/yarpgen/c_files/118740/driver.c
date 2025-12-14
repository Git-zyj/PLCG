#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1074296786U;
signed char var_3 = (signed char)51;
unsigned long long int var_4 = 16260223964053369845ULL;
unsigned char var_6 = (unsigned char)74;
long long int var_8 = -254685957471996772LL;
int zero = 0;
int var_12 = 164847779;
unsigned short var_13 = (unsigned short)35086;
signed char var_14 = (signed char)-36;
short var_15 = (short)19660;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

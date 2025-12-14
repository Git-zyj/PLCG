#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6735551559654309091LL;
unsigned short var_2 = (unsigned short)62891;
signed char var_3 = (signed char)82;
unsigned int var_14 = 95484213U;
int zero = 0;
long long int var_15 = -6128766616216862476LL;
signed char var_16 = (signed char)-105;
unsigned char var_17 = (unsigned char)245;
unsigned char var_18 = (unsigned char)117;
unsigned char var_19 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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

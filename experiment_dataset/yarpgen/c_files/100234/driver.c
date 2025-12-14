#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)17188;
unsigned char var_9 = (unsigned char)11;
unsigned char var_13 = (unsigned char)241;
unsigned char var_14 = (unsigned char)9;
unsigned long long int var_16 = 12320663592614132332ULL;
unsigned short var_18 = (unsigned short)24557;
int zero = 0;
unsigned long long int var_19 = 58062141935688195ULL;
int var_20 = 1392680335;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

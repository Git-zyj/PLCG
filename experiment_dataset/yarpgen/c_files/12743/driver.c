#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 717491949U;
unsigned short var_3 = (unsigned short)22305;
long long int var_7 = -1002643060045482853LL;
unsigned short var_11 = (unsigned short)2429;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
unsigned long long int var_13 = 12553764946573820108ULL;
unsigned int var_14 = 1934901927U;
unsigned char var_15 = (unsigned char)87;
void init() {
}

void checksum() {
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

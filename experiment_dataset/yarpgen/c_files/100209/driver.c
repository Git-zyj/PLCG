#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
signed char var_1 = (signed char)-49;
long long int var_10 = -8517865730939643780LL;
signed char var_11 = (signed char)127;
unsigned char var_12 = (unsigned char)129;
int zero = 0;
signed char var_14 = (signed char)70;
unsigned short var_15 = (unsigned short)63821;
unsigned short var_16 = (unsigned short)23917;
unsigned long long int var_17 = 1218068460277050656ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

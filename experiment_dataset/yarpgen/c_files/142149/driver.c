#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)16;
unsigned int var_6 = 694833537U;
unsigned int var_9 = 2671029206U;
long long int var_14 = 6112931531264084259LL;
signed char var_15 = (signed char)92;
int zero = 0;
unsigned char var_17 = (unsigned char)167;
unsigned int var_18 = 4045615096U;
unsigned short var_19 = (unsigned short)28960;
void init() {
}

void checksum() {
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

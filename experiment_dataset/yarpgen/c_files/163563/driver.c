#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned char var_1 = (unsigned char)254;
unsigned int var_3 = 3300902232U;
unsigned char var_6 = (unsigned char)17;
unsigned int var_7 = 3521538168U;
unsigned char var_9 = (unsigned char)129;
unsigned char var_12 = (unsigned char)102;
int zero = 0;
unsigned int var_15 = 2355445329U;
unsigned int var_16 = 3957109713U;
unsigned char var_17 = (unsigned char)82;
void init() {
}

void checksum() {
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

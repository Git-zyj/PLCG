#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3118684791U;
unsigned long long int var_3 = 3833329855610242297ULL;
unsigned char var_7 = (unsigned char)53;
long long int var_8 = -4162439799784122419LL;
unsigned long long int var_9 = 9233987100015164978ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)129;
signed char var_14 = (signed char)108;
unsigned long long int var_15 = 14545675105395958092ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 719119766U;
unsigned char var_8 = (unsigned char)169;
unsigned int var_13 = 668274244U;
int var_14 = -1968894609;
int zero = 0;
unsigned int var_20 = 575150424U;
int var_21 = 177863480;
unsigned short var_22 = (unsigned short)15083;
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

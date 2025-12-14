#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44079;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)91;
int zero = 0;
unsigned short var_14 = (unsigned short)5862;
int var_15 = -1593065781;
unsigned int var_16 = 934119185U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

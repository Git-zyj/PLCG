#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3632209465U;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 2410256749U;
unsigned char var_7 = (unsigned char)80;
unsigned short var_9 = (unsigned short)30458;
unsigned int var_11 = 4082752118U;
int var_12 = -388012793;
int zero = 0;
unsigned char var_15 = (unsigned char)5;
_Bool var_16 = (_Bool)0;
int var_17 = -1042945680;
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

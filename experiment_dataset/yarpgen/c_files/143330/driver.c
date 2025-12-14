#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4097848261U;
unsigned short var_3 = (unsigned short)44732;
unsigned int var_5 = 158842630U;
unsigned char var_6 = (unsigned char)70;
unsigned char var_7 = (unsigned char)75;
unsigned long long int var_10 = 6139598262135208420ULL;
long long int var_11 = 490539462100850074LL;
int zero = 0;
unsigned short var_13 = (unsigned short)7724;
int var_14 = 1340077512;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

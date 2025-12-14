#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -22157218617391911LL;
unsigned char var_3 = (unsigned char)34;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2140953U;
unsigned short var_10 = (unsigned short)9482;
int zero = 0;
unsigned short var_13 = (unsigned short)14209;
unsigned long long int var_14 = 18284963037381383384ULL;
unsigned int var_15 = 3823822721U;
unsigned char var_16 = (unsigned char)97;
unsigned char var_17 = (unsigned char)196;
unsigned short var_18 = (unsigned short)57256;
unsigned long long int var_19 = 6908734692605460017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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

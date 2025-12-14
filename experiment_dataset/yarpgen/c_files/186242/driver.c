#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24425;
unsigned char var_10 = (unsigned char)67;
int var_11 = -382239942;
unsigned char var_13 = (unsigned char)184;
unsigned int var_19 = 1197422569U;
int zero = 0;
long long int var_20 = -1482418184553100975LL;
short var_21 = (short)18981;
short var_22 = (short)29528;
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

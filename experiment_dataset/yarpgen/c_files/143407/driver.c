#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7362364492627524462ULL;
unsigned long long int var_6 = 253589802924447673ULL;
long long int var_9 = -6932255636555517219LL;
int var_13 = 1686071161;
int zero = 0;
unsigned long long int var_14 = 3789936216574784847ULL;
short var_15 = (short)5906;
unsigned short var_16 = (unsigned short)34726;
unsigned char var_17 = (unsigned char)95;
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

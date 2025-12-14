#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 524704651561576077ULL;
unsigned long long int var_3 = 2180831021825763882ULL;
signed char var_6 = (signed char)50;
unsigned short var_7 = (unsigned short)13690;
signed char var_11 = (signed char)44;
int zero = 0;
long long int var_16 = -4087656655169300044LL;
unsigned short var_17 = (unsigned short)3119;
long long int var_18 = 3407619260207233110LL;
signed char var_19 = (signed char)-36;
void init() {
}

void checksum() {
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

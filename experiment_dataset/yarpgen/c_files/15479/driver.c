#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
unsigned long long int var_4 = 7803832019710562882ULL;
unsigned long long int var_7 = 1059288030395128341ULL;
unsigned char var_9 = (unsigned char)126;
long long int var_16 = 7130459126830399612LL;
int zero = 0;
unsigned long long int var_17 = 4006092013908588398ULL;
unsigned long long int var_18 = 13970853357317809942ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

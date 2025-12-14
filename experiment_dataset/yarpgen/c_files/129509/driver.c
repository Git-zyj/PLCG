#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2202497461640468801ULL;
unsigned char var_6 = (unsigned char)115;
int zero = 0;
unsigned short var_15 = (unsigned short)43599;
long long int var_16 = 4017480569309096281LL;
signed char var_17 = (signed char)-125;
unsigned int var_18 = 3688282527U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -368000122334507077LL;
unsigned long long int var_1 = 13762248254918320353ULL;
long long int var_7 = -4330954022470381058LL;
unsigned int var_10 = 220377333U;
long long int var_12 = -1117956570035650694LL;
unsigned long long int var_14 = 8287444651786763310ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)9;
unsigned long long int var_17 = 10589596511278954312ULL;
unsigned int var_18 = 737658059U;
void init() {
}

void checksum() {
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

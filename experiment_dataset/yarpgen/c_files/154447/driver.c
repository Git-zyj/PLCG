#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2195396111U;
unsigned long long int var_12 = 11523194041241973989ULL;
long long int var_13 = 8743719634461867837LL;
unsigned int var_16 = 816854074U;
unsigned short var_17 = (unsigned short)53822;
int zero = 0;
unsigned long long int var_19 = 15234792658973975892ULL;
unsigned int var_20 = 4099183518U;
unsigned char var_21 = (unsigned char)59;
unsigned short var_22 = (unsigned short)3363;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8938418493715586930ULL;
unsigned int var_3 = 28771770U;
unsigned char var_4 = (unsigned char)169;
long long int var_5 = 6415962907867448817LL;
unsigned short var_7 = (unsigned short)56515;
unsigned short var_9 = (unsigned short)48872;
int zero = 0;
unsigned long long int var_10 = 10392505135962414722ULL;
unsigned int var_11 = 2914355365U;
unsigned char var_12 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17037;
unsigned short var_2 = (unsigned short)38234;
unsigned long long int var_4 = 5804870835309246310ULL;
unsigned int var_5 = 3228417500U;
unsigned short var_6 = (unsigned short)2299;
unsigned char var_8 = (unsigned char)162;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
unsigned int var_10 = 2480122745U;
long long int var_11 = 6622764683802674442LL;
unsigned short var_12 = (unsigned short)69;
unsigned long long int var_13 = 7826616316552552165ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

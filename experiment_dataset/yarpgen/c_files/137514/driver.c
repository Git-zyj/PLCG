#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8559163400031424878ULL;
int var_4 = -931908876;
unsigned short var_5 = (unsigned short)44062;
int var_6 = 2023143983;
unsigned long long int var_7 = 14804409145635246346ULL;
unsigned short var_11 = (unsigned short)32680;
unsigned char var_12 = (unsigned char)98;
unsigned short var_16 = (unsigned short)20816;
unsigned long long int var_17 = 18096919953889282322ULL;
int zero = 0;
long long int var_19 = 8553730647099579052LL;
unsigned char var_20 = (unsigned char)221;
unsigned int var_21 = 29213374U;
signed char var_22 = (signed char)81;
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

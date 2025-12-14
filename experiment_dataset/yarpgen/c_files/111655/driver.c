#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6783845693297135002LL;
unsigned char var_4 = (unsigned char)102;
unsigned long long int var_6 = 3487587382168938372ULL;
int var_8 = 2085215212;
unsigned short var_9 = (unsigned short)53342;
int zero = 0;
signed char var_13 = (signed char)-64;
long long int var_14 = 2591657203588152293LL;
unsigned char var_15 = (unsigned char)64;
unsigned short var_16 = (unsigned short)31700;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

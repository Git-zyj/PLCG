#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
int var_2 = 1735223016;
unsigned int var_3 = 1751065319U;
unsigned long long int var_6 = 7101757594216282643ULL;
unsigned short var_15 = (unsigned short)52481;
int var_17 = -1359519801;
int zero = 0;
long long int var_19 = -2858819976589507888LL;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)-60;
signed char var_22 = (signed char)9;
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

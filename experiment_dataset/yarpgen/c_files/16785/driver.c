#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2926044575956229421ULL;
signed char var_7 = (signed char)-112;
unsigned char var_11 = (unsigned char)234;
long long int var_18 = -4850223169651189825LL;
int zero = 0;
unsigned char var_19 = (unsigned char)148;
int var_20 = 1162612191;
unsigned long long int var_21 = 6717002197333615001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

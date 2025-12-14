#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 404175662294744000LL;
unsigned char var_3 = (unsigned char)245;
signed char var_5 = (signed char)-87;
unsigned char var_6 = (unsigned char)39;
long long int var_11 = 1842609171640327400LL;
long long int var_12 = 5574542451200302695LL;
int zero = 0;
short var_13 = (short)-10915;
unsigned char var_14 = (unsigned char)252;
unsigned int var_15 = 3187625131U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned char var_1 = (unsigned char)12;
long long int var_2 = -4356665177471802506LL;
long long int var_3 = -6096802326528710035LL;
signed char var_5 = (signed char)72;
unsigned char var_9 = (unsigned char)251;
int zero = 0;
short var_10 = (short)-18388;
unsigned long long int var_11 = 6665180841337320728ULL;
short var_12 = (short)-10975;
unsigned long long int var_13 = 2253171438413029941ULL;
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

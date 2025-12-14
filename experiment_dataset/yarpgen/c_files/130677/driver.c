#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15069;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 11157535189023851378ULL;
int var_7 = -1845841417;
int var_11 = -1969018197;
int var_18 = 734999144;
int zero = 0;
unsigned char var_20 = (unsigned char)47;
unsigned long long int var_21 = 11106519707813113885ULL;
long long int var_22 = -7213692262875944390LL;
unsigned char var_23 = (unsigned char)54;
short var_24 = (short)22430;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

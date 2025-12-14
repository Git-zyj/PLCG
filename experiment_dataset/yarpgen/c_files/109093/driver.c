#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6602786298097506307ULL;
unsigned short var_1 = (unsigned short)9138;
signed char var_3 = (signed char)-48;
unsigned char var_5 = (unsigned char)136;
int var_7 = 2018398821;
unsigned char var_8 = (unsigned char)13;
unsigned int var_10 = 2369110397U;
int zero = 0;
unsigned char var_11 = (unsigned char)119;
unsigned short var_12 = (unsigned short)22117;
signed char var_13 = (signed char)61;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)58518;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

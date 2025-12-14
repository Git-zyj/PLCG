#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3208890785900759728LL;
unsigned char var_3 = (unsigned char)48;
unsigned char var_5 = (unsigned char)165;
long long int var_6 = -6989436821392913169LL;
unsigned int var_7 = 2209060420U;
int var_8 = -6544226;
unsigned char var_11 = (unsigned char)244;
long long int var_13 = -2593881950817036875LL;
int zero = 0;
signed char var_18 = (signed char)-82;
unsigned char var_19 = (unsigned char)52;
int var_20 = 1154649323;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

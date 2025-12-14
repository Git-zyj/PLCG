#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
long long int var_2 = -1232696332914942653LL;
signed char var_3 = (signed char)1;
unsigned char var_4 = (unsigned char)207;
int var_7 = -42390921;
unsigned long long int var_8 = 16095268441073321308ULL;
signed char var_10 = (signed char)81;
unsigned int var_12 = 3685828742U;
unsigned char var_16 = (unsigned char)203;
int zero = 0;
unsigned char var_17 = (unsigned char)34;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

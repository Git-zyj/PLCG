#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1465347961923022756LL;
signed char var_7 = (signed char)-2;
unsigned char var_8 = (unsigned char)134;
signed char var_11 = (signed char)-59;
int zero = 0;
unsigned long long int var_16 = 1754171312347498456ULL;
unsigned short var_17 = (unsigned short)55030;
long long int var_18 = -1318329156318581819LL;
unsigned char var_19 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

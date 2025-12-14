#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4562;
short var_2 = (short)5538;
long long int var_4 = 2204666129516807036LL;
unsigned int var_7 = 3779742378U;
long long int var_10 = -5908611360336961131LL;
unsigned char var_14 = (unsigned char)134;
int var_17 = 1227405120;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
unsigned int var_19 = 1677309762U;
long long int var_20 = -8751816930783203156LL;
unsigned int var_21 = 2378521878U;
signed char var_22 = (signed char)-4;
signed char var_23 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

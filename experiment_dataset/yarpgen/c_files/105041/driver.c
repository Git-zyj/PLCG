#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
unsigned short var_2 = (unsigned short)60029;
unsigned int var_10 = 2128575466U;
short var_11 = (short)-16808;
int zero = 0;
unsigned long long int var_14 = 14449525386199866442ULL;
unsigned char var_15 = (unsigned char)59;
signed char var_16 = (signed char)-46;
unsigned int var_17 = 2679302073U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

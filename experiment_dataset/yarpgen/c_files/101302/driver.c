#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41769;
signed char var_2 = (signed char)-90;
unsigned long long int var_3 = 5393768955137706114ULL;
signed char var_6 = (signed char)111;
signed char var_8 = (signed char)20;
unsigned char var_11 = (unsigned char)145;
int var_15 = 1849373814;
int zero = 0;
int var_16 = -1786650408;
long long int var_17 = 405911553266804240LL;
void init() {
}

void checksum() {
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

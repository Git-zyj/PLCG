#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2506;
signed char var_4 = (signed char)20;
unsigned char var_5 = (unsigned char)174;
signed char var_9 = (signed char)-86;
signed char var_10 = (signed char)-61;
unsigned char var_11 = (unsigned char)108;
signed char var_13 = (signed char)-117;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)43;
unsigned short var_19 = (unsigned short)11366;
signed char var_20 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

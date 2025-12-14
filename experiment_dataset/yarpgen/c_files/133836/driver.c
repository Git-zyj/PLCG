#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2178886229379833726LL;
short var_8 = (short)28426;
unsigned char var_10 = (unsigned char)43;
unsigned char var_13 = (unsigned char)19;
unsigned long long int var_16 = 3339183747075357612ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
signed char var_19 = (signed char)-6;
void init() {
}

void checksum() {
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

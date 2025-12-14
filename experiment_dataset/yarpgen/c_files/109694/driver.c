#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5072305186083157589LL;
unsigned long long int var_6 = 2268171196771897407ULL;
unsigned char var_10 = (unsigned char)32;
long long int var_12 = 3704313266397706143LL;
int var_15 = -1557807016;
short var_16 = (short)-8685;
unsigned char var_17 = (unsigned char)50;
signed char var_18 = (signed char)80;
int zero = 0;
unsigned long long int var_19 = 14129151378886597640ULL;
signed char var_20 = (signed char)-66;
unsigned char var_21 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

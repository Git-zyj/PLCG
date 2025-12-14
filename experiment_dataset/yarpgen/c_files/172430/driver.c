#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18520;
unsigned char var_3 = (unsigned char)130;
signed char var_4 = (signed char)52;
long long int var_8 = 3378666818214709062LL;
int zero = 0;
unsigned char var_13 = (unsigned char)85;
signed char var_14 = (signed char)-113;
unsigned char var_15 = (unsigned char)85;
unsigned short var_16 = (unsigned short)51475;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

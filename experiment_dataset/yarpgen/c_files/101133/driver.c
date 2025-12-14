#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22651;
long long int var_1 = 133287598895874689LL;
signed char var_3 = (signed char)98;
unsigned int var_4 = 2225387253U;
short var_5 = (short)7112;
long long int var_6 = 7199912551517986072LL;
unsigned char var_11 = (unsigned char)17;
short var_12 = (short)7637;
unsigned short var_16 = (unsigned short)26934;
unsigned int var_19 = 190286340U;
int zero = 0;
unsigned char var_20 = (unsigned char)152;
unsigned int var_21 = 1007333217U;
unsigned int var_22 = 1036589100U;
unsigned int var_23 = 2183345131U;
void init() {
}

void checksum() {
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

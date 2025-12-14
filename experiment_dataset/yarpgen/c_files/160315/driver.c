#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5018;
unsigned long long int var_3 = 17675029564210468009ULL;
unsigned short var_6 = (unsigned short)43390;
unsigned long long int var_8 = 2526708828262580772ULL;
unsigned char var_9 = (unsigned char)172;
short var_11 = (short)-7306;
long long int var_12 = 6804973626732008587LL;
int var_15 = 171204520;
unsigned int var_16 = 2786002153U;
int zero = 0;
int var_17 = -1226055507;
short var_18 = (short)20949;
unsigned int var_19 = 81190768U;
unsigned short var_20 = (unsigned short)58018;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20040;
unsigned short var_2 = (unsigned short)4354;
unsigned char var_3 = (unsigned char)118;
unsigned long long int var_4 = 14154844641144902129ULL;
unsigned char var_6 = (unsigned char)6;
unsigned short var_11 = (unsigned short)48813;
unsigned char var_12 = (unsigned char)17;
short var_13 = (short)12553;
unsigned short var_14 = (unsigned short)40086;
signed char var_16 = (signed char)115;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
unsigned short var_20 = (unsigned short)57816;
void init() {
}

void checksum() {
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

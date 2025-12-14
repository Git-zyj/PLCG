#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
long long int var_2 = 8600419503959227387LL;
short var_4 = (short)1576;
unsigned short var_5 = (unsigned short)55371;
signed char var_6 = (signed char)81;
short var_7 = (short)-29400;
long long int var_9 = 2590316682583801213LL;
long long int var_11 = 8732042550298422012LL;
unsigned char var_13 = (unsigned char)252;
int zero = 0;
unsigned short var_15 = (unsigned short)1120;
short var_16 = (short)31641;
unsigned short var_17 = (unsigned short)15802;
unsigned short var_18 = (unsigned short)26353;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

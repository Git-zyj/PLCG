#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned char var_1 = (unsigned char)46;
int var_2 = -1555402462;
unsigned char var_4 = (unsigned char)10;
long long int var_7 = -2857998221451854563LL;
long long int var_8 = -2950363377483109116LL;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
unsigned short var_13 = (unsigned short)62033;
unsigned long long int var_14 = 17178492111333628143ULL;
short var_15 = (short)-3662;
short var_16 = (short)-23634;
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

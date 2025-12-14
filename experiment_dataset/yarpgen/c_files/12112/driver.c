#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15513545879521570783ULL;
int var_7 = -1418100049;
unsigned short var_10 = (unsigned short)64905;
unsigned char var_12 = (unsigned char)220;
short var_13 = (short)6867;
int zero = 0;
unsigned char var_16 = (unsigned char)93;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)239;
unsigned short var_19 = (unsigned short)20270;
unsigned short var_20 = (unsigned short)36100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

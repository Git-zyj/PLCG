#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8644880603893147962LL;
unsigned int var_3 = 564110346U;
unsigned int var_4 = 1466568476U;
short var_5 = (short)-16717;
long long int var_6 = -8708692366439881476LL;
int var_7 = -1616685266;
unsigned int var_9 = 1522721872U;
unsigned long long int var_11 = 5066090230306365840ULL;
unsigned short var_13 = (unsigned short)62259;
unsigned short var_14 = (unsigned short)8438;
int var_16 = 1363510083;
int zero = 0;
int var_17 = -2055322827;
unsigned long long int var_18 = 16583319049927398906ULL;
unsigned short var_19 = (unsigned short)41274;
unsigned short var_20 = (unsigned short)48715;
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

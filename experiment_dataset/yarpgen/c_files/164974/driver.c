#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2654321171096529233LL;
unsigned char var_2 = (unsigned char)217;
long long int var_3 = -7255727794940665914LL;
long long int var_5 = -1184053912046199652LL;
unsigned long long int var_7 = 821198658697596560ULL;
unsigned char var_10 = (unsigned char)112;
unsigned int var_11 = 522318436U;
unsigned short var_14 = (unsigned short)8446;
unsigned long long int var_17 = 15034119179772047561ULL;
int zero = 0;
short var_18 = (short)-26714;
unsigned char var_19 = (unsigned char)125;
unsigned short var_20 = (unsigned short)62083;
unsigned char var_21 = (unsigned char)210;
unsigned short var_22 = (unsigned short)62990;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

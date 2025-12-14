#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16803201761485415357ULL;
unsigned long long int var_4 = 12869993226049127735ULL;
unsigned long long int var_5 = 15196515994535571836ULL;
unsigned long long int var_6 = 1480417982960729515ULL;
int var_10 = 1547124666;
_Bool var_11 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)227;
unsigned short var_21 = (unsigned short)37650;
int var_22 = 1338171889;
void init() {
}

void checksum() {
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

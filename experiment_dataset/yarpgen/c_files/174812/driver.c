#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -989881732;
unsigned long long int var_7 = 14400563544275090281ULL;
unsigned short var_9 = (unsigned short)9732;
long long int var_14 = -4934324078221233446LL;
unsigned char var_15 = (unsigned char)223;
int zero = 0;
unsigned char var_16 = (unsigned char)96;
unsigned short var_17 = (unsigned short)56135;
long long int var_18 = -8214730207045375404LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)219;
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

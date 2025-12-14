#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12489;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 18007483260178487284ULL;
long long int var_11 = 4867508705277780325LL;
unsigned char var_13 = (unsigned char)132;
long long int var_14 = 6900238153909732007LL;
unsigned short var_15 = (unsigned short)2761;
int zero = 0;
unsigned int var_17 = 2172365650U;
short var_18 = (short)-6230;
long long int var_19 = -4450609627513229090LL;
unsigned long long int var_20 = 14072516328301835990ULL;
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

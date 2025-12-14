#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7250077497718630069LL;
unsigned int var_5 = 623656913U;
unsigned long long int var_6 = 254120229572562147ULL;
short var_7 = (short)-4595;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)9938;
int zero = 0;
unsigned long long int var_14 = 12239883623439224938ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)126;
void init() {
}

void checksum() {
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

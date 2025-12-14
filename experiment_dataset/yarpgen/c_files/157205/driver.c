#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
unsigned int var_2 = 2752363481U;
unsigned int var_3 = 418080898U;
unsigned int var_4 = 3213079545U;
long long int var_5 = 4536705033655535137LL;
unsigned char var_6 = (unsigned char)238;
unsigned long long int var_7 = 15049705239615826624ULL;
unsigned long long int var_10 = 3511702550319698282ULL;
long long int var_13 = 2538891079335433142LL;
int zero = 0;
unsigned char var_16 = (unsigned char)84;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)102;
void init() {
}

void checksum() {
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

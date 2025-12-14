#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2408934744U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)36076;
int var_11 = -1476173079;
int zero = 0;
unsigned char var_19 = (unsigned char)119;
short var_20 = (short)9168;
unsigned long long int var_21 = 12964582988948201861ULL;
unsigned short var_22 = (unsigned short)27294;
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

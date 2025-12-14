#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1929745811U;
short var_3 = (short)-5864;
unsigned long long int var_4 = 15220491925947661340ULL;
long long int var_5 = -7136321289432860372LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)134;
unsigned char var_9 = (unsigned char)28;
unsigned int var_11 = 2807034892U;
long long int var_12 = -6664373307529630034LL;
int zero = 0;
long long int var_14 = -320073393268482243LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)75;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

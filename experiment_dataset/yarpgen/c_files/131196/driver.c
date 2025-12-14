#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4725749508529335724ULL;
unsigned short var_3 = (unsigned short)41201;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7663909882283910432LL;
int zero = 0;
long long int var_14 = -6717542255954125323LL;
unsigned short var_15 = (unsigned short)13441;
long long int var_16 = 6260365825253547239LL;
unsigned int var_17 = 3081795328U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

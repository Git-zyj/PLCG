#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6663317110575635524LL;
unsigned long long int var_2 = 6539143542167720935ULL;
int var_4 = -123293668;
unsigned long long int var_6 = 17358314381575346334ULL;
unsigned short var_7 = (unsigned short)41255;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 5211915056053932057LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)5;
unsigned int var_18 = 4292816718U;
void init() {
}

void checksum() {
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

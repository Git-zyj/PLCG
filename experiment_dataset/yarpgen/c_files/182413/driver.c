#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3831120867U;
unsigned long long int var_3 = 6208992748731739060ULL;
unsigned char var_6 = (unsigned char)102;
unsigned long long int var_9 = 12362041575267412811ULL;
unsigned char var_10 = (unsigned char)136;
signed char var_12 = (signed char)-47;
int zero = 0;
unsigned int var_15 = 2112252178U;
signed char var_16 = (signed char)6;
unsigned short var_17 = (unsigned short)13703;
void init() {
}

void checksum() {
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

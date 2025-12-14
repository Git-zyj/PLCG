#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1484998373;
unsigned char var_3 = (unsigned char)129;
unsigned long long int var_4 = 9704653552629832734ULL;
unsigned char var_14 = (unsigned char)41;
unsigned char var_16 = (unsigned char)88;
unsigned int var_17 = 2454149300U;
int var_18 = -1710165338;
int zero = 0;
unsigned long long int var_20 = 13689832335533207120ULL;
unsigned short var_21 = (unsigned short)10346;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 11281186106270511693ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

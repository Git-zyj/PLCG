#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
unsigned long long int var_4 = 277574389793473951ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)453;
unsigned short var_8 = (unsigned short)27443;
short var_15 = (short)22907;
unsigned int var_18 = 3038519459U;
int zero = 0;
long long int var_19 = 3040852690868301026LL;
unsigned int var_20 = 4011646182U;
int var_21 = 1658242919;
unsigned char var_22 = (unsigned char)227;
unsigned int var_23 = 2429303668U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

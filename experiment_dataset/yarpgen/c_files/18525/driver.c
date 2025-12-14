#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5494;
unsigned long long int var_4 = 9149975637908383559ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)52027;
unsigned short var_12 = (unsigned short)35489;
int zero = 0;
unsigned long long int var_13 = 908887658082184723ULL;
long long int var_14 = -5500219679488793070LL;
short var_15 = (short)7042;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

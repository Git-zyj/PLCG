#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2386837756577459407LL;
unsigned short var_1 = (unsigned short)26488;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8431467254039903696ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_14 = (short)-19349;
long long int var_15 = -7187893108074019724LL;
unsigned int var_16 = 1362118634U;
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

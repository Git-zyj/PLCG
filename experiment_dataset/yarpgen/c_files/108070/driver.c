#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38227;
unsigned short var_5 = (unsigned short)43043;
unsigned int var_6 = 3612602137U;
_Bool var_9 = (_Bool)0;
int var_15 = 543397572;
unsigned short var_17 = (unsigned short)2551;
int zero = 0;
long long int var_19 = 2134509782941855509LL;
short var_20 = (short)5760;
unsigned long long int var_21 = 1328490022803525218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

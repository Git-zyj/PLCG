#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
short var_2 = (short)20920;
_Bool var_4 = (_Bool)0;
long long int var_7 = -5386559389961026996LL;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
unsigned long long int var_10 = 6392657222353353191ULL;
unsigned char var_11 = (unsigned char)181;
short var_12 = (short)-8910;
unsigned long long int var_13 = 13083695992909790161ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

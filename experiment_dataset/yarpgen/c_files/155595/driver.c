#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
int var_1 = 1177511600;
_Bool var_2 = (_Bool)0;
unsigned char var_12 = (unsigned char)244;
unsigned long long int var_15 = 17696768401918813294ULL;
int zero = 0;
unsigned int var_18 = 319339028U;
unsigned short var_19 = (unsigned short)61120;
int var_20 = 1519705007;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

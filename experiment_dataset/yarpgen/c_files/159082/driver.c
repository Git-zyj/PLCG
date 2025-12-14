#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)49080;
unsigned int var_9 = 4058452160U;
short var_10 = (short)-8967;
int var_16 = 1738874860;
int zero = 0;
unsigned int var_17 = 3650145339U;
unsigned long long int var_18 = 15216627687453505681ULL;
int var_19 = -476978016;
int var_20 = -506978747;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

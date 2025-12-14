#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 616488250;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)34375;
short var_7 = (short)-21615;
unsigned char var_8 = (unsigned char)66;
long long int var_10 = 2497656668923802491LL;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
unsigned int var_12 = 1262244145U;
long long int var_13 = 1409369615871707696LL;
unsigned int var_14 = 326501934U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

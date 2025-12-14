#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7080727023160416247LL;
long long int var_9 = 2577448693072437521LL;
short var_11 = (short)-1374;
unsigned short var_12 = (unsigned short)6310;
long long int var_14 = 1582912422754429454LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1696303949711920543LL;
int zero = 0;
short var_18 = (short)-11277;
int var_19 = -800609949;
long long int var_20 = -3826606316814191862LL;
_Bool var_21 = (_Bool)0;
int var_22 = -2002555036;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 3698337753042867873ULL;
unsigned int var_10 = 946951937U;
int var_11 = 1285272823;
signed char var_12 = (signed char)-76;
int zero = 0;
long long int var_16 = 3993401289019186539LL;
long long int var_17 = -9093519413000286184LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

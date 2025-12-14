#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1424737565U;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 3396489045U;
unsigned int var_5 = 319052425U;
unsigned int var_10 = 680922765U;
unsigned int var_13 = 1259056868U;
unsigned int var_15 = 1883113059U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3414566704U;
unsigned int var_19 = 3542385845U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1396555204;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)74;
int var_12 = 319481041;
signed char var_14 = (signed char)-100;
unsigned long long int var_17 = 18143472869949574486ULL;
int zero = 0;
int var_19 = 71520991;
int var_20 = -1567522717;
_Bool var_21 = (_Bool)0;
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

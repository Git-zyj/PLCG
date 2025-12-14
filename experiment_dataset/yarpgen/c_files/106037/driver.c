#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52163;
_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)-86;
unsigned short var_7 = (unsigned short)60431;
long long int var_9 = 2468368778676082666LL;
unsigned long long int var_11 = 12791093588551220131ULL;
int zero = 0;
int var_13 = -811239956;
signed char var_14 = (signed char)-69;
unsigned int var_15 = 1141361268U;
unsigned char var_16 = (unsigned char)150;
unsigned long long int var_17 = 17177178001759271527ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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

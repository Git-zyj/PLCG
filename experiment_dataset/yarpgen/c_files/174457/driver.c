#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10181783132607102892ULL;
unsigned short var_1 = (unsigned short)21002;
long long int var_2 = 4757977886463621485LL;
unsigned int var_3 = 4122765844U;
unsigned char var_5 = (unsigned char)80;
signed char var_6 = (signed char)0;
signed char var_7 = (signed char)-70;
unsigned short var_11 = (unsigned short)18408;
int zero = 0;
int var_12 = -647816080;
unsigned long long int var_13 = 420783231331484999ULL;
unsigned long long int var_14 = 8272601164007843734ULL;
unsigned long long int var_15 = 13297259028124596945ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

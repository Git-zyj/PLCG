#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1309704562;
long long int var_8 = -8323805878289488843LL;
int var_9 = -1626390581;
short var_10 = (short)23308;
int var_12 = 1416252501;
long long int var_13 = 8291774688088552081LL;
unsigned char var_15 = (unsigned char)52;
unsigned int var_16 = 911499215U;
int zero = 0;
unsigned int var_19 = 2634402964U;
unsigned int var_20 = 87802681U;
int var_21 = 1881690473;
unsigned int var_22 = 3961376372U;
unsigned int var_23 = 1227160885U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

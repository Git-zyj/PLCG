#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1192087028U;
long long int var_12 = -1521175397671837117LL;
long long int var_13 = -1054468550202675535LL;
unsigned int var_14 = 278291540U;
int zero = 0;
int var_18 = 1841569500;
short var_19 = (short)26777;
unsigned int var_20 = 4174839418U;
unsigned short var_21 = (unsigned short)48309;
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

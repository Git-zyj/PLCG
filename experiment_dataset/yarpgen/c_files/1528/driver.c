#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14460;
short var_2 = (short)32320;
short var_5 = (short)31499;
int var_9 = 510599441;
short var_10 = (short)-29354;
int zero = 0;
long long int var_11 = -7476942270968941755LL;
short var_12 = (short)19762;
signed char var_13 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

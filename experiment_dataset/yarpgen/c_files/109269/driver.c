#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10943186139793813618ULL;
short var_2 = (short)-2028;
int var_9 = -125802844;
unsigned int var_10 = 2393390877U;
int zero = 0;
unsigned char var_13 = (unsigned char)206;
int var_14 = -1763636371;
void init() {
}

void checksum() {
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

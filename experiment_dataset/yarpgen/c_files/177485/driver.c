#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4961270334556470764ULL;
unsigned int var_3 = 1445454166U;
unsigned short var_4 = (unsigned short)21110;
int var_5 = -2133595124;
signed char var_9 = (signed char)-9;
int var_10 = 1841792839;
int zero = 0;
unsigned int var_13 = 494973361U;
long long int var_14 = 304616205902600170LL;
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

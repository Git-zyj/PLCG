#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 433956967;
signed char var_2 = (signed char)-89;
short var_3 = (short)3789;
unsigned long long int var_4 = 1517536701782405467ULL;
unsigned long long int var_8 = 9549406975613479337ULL;
long long int var_9 = 2748756949371530080LL;
short var_12 = (short)-26778;
long long int var_14 = -2391524120907507716LL;
int var_16 = 1216851978;
int zero = 0;
unsigned long long int var_19 = 15919313846965155322ULL;
short var_20 = (short)-27085;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

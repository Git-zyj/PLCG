#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1791967147;
unsigned long long int var_5 = 7137401989536920452ULL;
unsigned char var_13 = (unsigned char)118;
int var_15 = -2118754357;
int zero = 0;
int var_16 = 1030494111;
unsigned char var_17 = (unsigned char)98;
unsigned char var_18 = (unsigned char)92;
unsigned int var_19 = 1887074937U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

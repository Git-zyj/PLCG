#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4570739663119616096LL;
int var_5 = -1880914340;
unsigned long long int var_8 = 3995774769854402166ULL;
int zero = 0;
int var_14 = 1958960022;
long long int var_15 = 4463335246875554950LL;
int var_16 = -943737879;
int var_17 = 918932742;
void init() {
}

void checksum() {
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

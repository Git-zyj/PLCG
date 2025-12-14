#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6338278614819181038ULL;
unsigned long long int var_9 = 6161741139483999409ULL;
unsigned long long int var_10 = 3533956899972637880ULL;
unsigned long long int var_11 = 4812084791676361983ULL;
int zero = 0;
unsigned long long int var_14 = 14495696854284351541ULL;
unsigned long long int var_15 = 1445596813926204380ULL;
unsigned long long int var_16 = 2217823648591775295ULL;
unsigned long long int var_17 = 14134828682296738251ULL;
unsigned long long int var_18 = 5122517689782764991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

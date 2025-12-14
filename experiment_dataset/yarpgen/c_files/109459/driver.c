#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12087126405894446839ULL;
unsigned long long int var_2 = 3759502853216559142ULL;
unsigned long long int var_4 = 7423184370374104848ULL;
int var_5 = -899294302;
short var_7 = (short)-23313;
short var_9 = (short)-30482;
unsigned long long int var_10 = 3586726097720407396ULL;
int zero = 0;
unsigned long long int var_11 = 17747450784552381888ULL;
int var_12 = 1007817839;
unsigned long long int var_13 = 15220531327994132607ULL;
short var_14 = (short)-1500;
short var_15 = (short)-8020;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

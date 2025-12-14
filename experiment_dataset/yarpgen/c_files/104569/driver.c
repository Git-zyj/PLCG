#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12417965263128899230ULL;
unsigned long long int var_1 = 12680455320433455985ULL;
unsigned long long int var_4 = 9945954579387026828ULL;
unsigned long long int var_5 = 2451820894312127668ULL;
unsigned long long int var_6 = 299138260484604629ULL;
unsigned long long int var_7 = 4815454584600164631ULL;
unsigned long long int var_9 = 3998431008875647632ULL;
unsigned long long int var_11 = 7895836836626196179ULL;
unsigned long long int var_15 = 4924422085105489210ULL;
unsigned long long int var_17 = 410419783034428017ULL;
int zero = 0;
unsigned long long int var_19 = 1231609673390452534ULL;
unsigned long long int var_20 = 13102416917141322462ULL;
unsigned long long int var_21 = 2247365469445780153ULL;
unsigned long long int var_22 = 11113430717133720835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

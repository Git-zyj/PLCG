#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1732925228;
int var_1 = -587054594;
int var_3 = -545919926;
signed char var_5 = (signed char)103;
long long int var_9 = -7070034842962821463LL;
unsigned int var_10 = 4053183299U;
unsigned int var_13 = 615915932U;
long long int var_14 = -2436245010455892091LL;
int zero = 0;
unsigned long long int var_17 = 11374030007485560398ULL;
int var_18 = -2059987390;
int var_19 = 2035750580;
void init() {
}

void checksum() {
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

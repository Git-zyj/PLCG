#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11285437359501718386ULL;
unsigned long long int var_2 = 13373710145236084086ULL;
unsigned long long int var_6 = 12120438055340169401ULL;
unsigned long long int var_7 = 2828426849449036180ULL;
unsigned long long int var_11 = 11258444104397883687ULL;
int zero = 0;
unsigned long long int var_13 = 6413425602304175713ULL;
unsigned long long int var_14 = 1345895046630729158ULL;
unsigned long long int var_15 = 8797623976403393602ULL;
void init() {
}

void checksum() {
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

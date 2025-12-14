#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3524427075U;
int var_10 = -1641260677;
short var_11 = (short)12674;
int var_13 = 653285634;
int zero = 0;
long long int var_16 = -8982182057030021943LL;
unsigned int var_17 = 2701059430U;
long long int var_18 = -7404828695127379243LL;
unsigned short var_19 = (unsigned short)62087;
int var_20 = -202424341;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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

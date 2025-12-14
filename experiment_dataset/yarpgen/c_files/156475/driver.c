#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3378592373U;
unsigned int var_11 = 4062529344U;
unsigned long long int var_12 = 6017646682429212553ULL;
long long int var_15 = 5200651590899269469LL;
int zero = 0;
long long int var_16 = 4414226244466831332LL;
long long int var_17 = -1291675194722611670LL;
void init() {
}

void checksum() {
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

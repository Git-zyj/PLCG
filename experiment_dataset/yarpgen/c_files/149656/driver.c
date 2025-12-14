#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15820588720939535132ULL;
short var_3 = (short)6565;
unsigned int var_7 = 4120037449U;
unsigned int var_9 = 83750673U;
unsigned long long int var_15 = 1904458876220856276ULL;
unsigned long long int var_19 = 8387668156516253151ULL;
int zero = 0;
unsigned long long int var_20 = 15764662600050992466ULL;
short var_21 = (short)-15369;
unsigned long long int var_22 = 3224717693833744166ULL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2923863517U;
unsigned int var_1 = 1803802412U;
unsigned char var_10 = (unsigned char)229;
short var_11 = (short)20157;
unsigned int var_13 = 2101747486U;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
short var_18 = (short)-7975;
unsigned long long int var_19 = 2928558396110903427ULL;
long long int var_20 = -5101186999483531821LL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15480380023259131651ULL;
short var_7 = (short)17700;
short var_11 = (short)-7255;
unsigned long long int var_13 = 10236559731680904365ULL;
int zero = 0;
short var_14 = (short)1257;
unsigned long long int var_15 = 3208086456627224508ULL;
unsigned long long int var_16 = 12769704351058506471ULL;
unsigned long long int var_17 = 13217758799862065634ULL;
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

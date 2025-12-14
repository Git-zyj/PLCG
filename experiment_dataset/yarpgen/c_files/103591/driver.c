#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 672781251U;
int var_1 = 965431180;
short var_4 = (short)-13029;
short var_5 = (short)22672;
long long int var_6 = -1265553319226258776LL;
unsigned int var_8 = 1006714829U;
unsigned long long int var_12 = 15579636276244355519ULL;
unsigned int var_15 = 2614225842U;
int zero = 0;
unsigned long long int var_16 = 1388317179940706936ULL;
unsigned long long int var_17 = 4349405154690472930ULL;
short var_18 = (short)-22532;
signed char var_19 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

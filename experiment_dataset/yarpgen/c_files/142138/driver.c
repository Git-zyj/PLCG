#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12989;
int var_1 = 422407145;
short var_8 = (short)-30547;
unsigned long long int var_9 = 13661924897844219981ULL;
long long int var_10 = 1624438273428324657LL;
unsigned long long int var_13 = 14202089150359273729ULL;
short var_14 = (short)-3221;
short var_15 = (short)16137;
int zero = 0;
long long int var_17 = 5320981000311152116LL;
unsigned int var_18 = 64100080U;
unsigned char var_19 = (unsigned char)169;
long long int var_20 = -8464785961997641854LL;
void init() {
}

void checksum() {
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

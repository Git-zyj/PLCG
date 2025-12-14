#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1618639514;
long long int var_2 = -4013873202239037329LL;
long long int var_4 = 951020069417559831LL;
short var_9 = (short)-4650;
short var_10 = (short)-11991;
unsigned long long int var_14 = 11031629298770798622ULL;
long long int var_16 = -5323561563299650479LL;
unsigned short var_19 = (unsigned short)13876;
int zero = 0;
unsigned int var_20 = 208659272U;
short var_21 = (short)-10808;
unsigned long long int var_22 = 7386353197039358662ULL;
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

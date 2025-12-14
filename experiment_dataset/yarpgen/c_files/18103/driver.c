#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9512;
short var_4 = (short)31521;
signed char var_5 = (signed char)-1;
short var_6 = (short)-22443;
long long int var_8 = -3159219269322976381LL;
int var_9 = -239710657;
int zero = 0;
short var_10 = (short)-24971;
int var_11 = -2068929323;
unsigned long long int var_12 = 12522055775301440344ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

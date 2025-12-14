#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14231502959502726327ULL;
signed char var_5 = (signed char)-30;
signed char var_6 = (signed char)115;
short var_8 = (short)-3638;
unsigned int var_9 = 2572702083U;
signed char var_11 = (signed char)66;
signed char var_15 = (signed char)-47;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
long long int var_20 = -2940749807568914111LL;
void init() {
}

void checksum() {
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

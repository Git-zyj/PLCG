#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
int var_2 = 283721676;
long long int var_3 = 1214298348650316816LL;
long long int var_4 = -577245232560374239LL;
unsigned int var_6 = 1233309534U;
unsigned long long int var_7 = 6859402353351336115ULL;
unsigned short var_9 = (unsigned short)6911;
long long int var_11 = -2723188701275923837LL;
int var_12 = 1950704867;
long long int var_15 = -3116703170625003602LL;
int zero = 0;
unsigned short var_17 = (unsigned short)62859;
unsigned short var_18 = (unsigned short)12454;
short var_19 = (short)-29645;
long long int var_20 = -5184321655955871927LL;
long long int var_21 = -6816099069772616670LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

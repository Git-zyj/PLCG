#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 767317100947666256LL;
int var_1 = -1821060152;
int var_3 = -1192233742;
long long int var_6 = 5449960991171559064LL;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-120;
long long int var_15 = -1880239230912804912LL;
int zero = 0;
unsigned char var_17 = (unsigned char)49;
unsigned int var_18 = 1975496836U;
_Bool var_19 = (_Bool)1;
int var_20 = -462012174;
signed char var_21 = (signed char)42;
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

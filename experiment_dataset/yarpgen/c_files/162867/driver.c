#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16348795685206937074ULL;
int var_1 = 1610772388;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 5826912643163319356ULL;
signed char var_4 = (signed char)61;
signed char var_8 = (signed char)38;
signed char var_9 = (signed char)60;
unsigned long long int var_10 = 8481546975544179903ULL;
int var_11 = -1706236501;
long long int var_13 = 2154914680500047962LL;
signed char var_14 = (signed char)8;
short var_15 = (short)-10946;
int zero = 0;
unsigned long long int var_17 = 13155778700709594476ULL;
short var_18 = (short)10339;
short var_19 = (short)-15007;
int var_20 = 724281055;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11057;
unsigned long long int var_1 = 3083893804419943889ULL;
signed char var_2 = (signed char)-54;
unsigned long long int var_3 = 16959407435327479836ULL;
unsigned int var_6 = 4243507718U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 542097071U;
unsigned char var_15 = (unsigned char)88;
long long int var_16 = -5398007088113897420LL;
unsigned long long int var_17 = 10622470996442277985ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

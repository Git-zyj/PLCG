#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 4518534084739732696ULL;
_Bool var_2 = (_Bool)0;
int var_5 = 258689354;
short var_6 = (short)-17141;
signed char var_7 = (signed char)95;
unsigned int var_8 = 2019900259U;
unsigned long long int var_9 = 15349240161230713345ULL;
unsigned long long int var_10 = 7270724428381415149ULL;
unsigned short var_11 = (unsigned short)61071;
unsigned short var_12 = (unsigned short)59064;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)37389;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 538190133U;
short var_1 = (short)-12070;
int var_2 = -1375870694;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-10;
unsigned short var_5 = (unsigned short)19190;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)95;
unsigned int var_8 = 3917011880U;
unsigned short var_9 = (unsigned short)45646;
int zero = 0;
long long int var_10 = -1492723374921369114LL;
short var_11 = (short)-17630;
unsigned int var_12 = 1097658456U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16278;
int var_2 = 1311201507;
short var_4 = (short)-9598;
short var_5 = (short)3580;
int var_6 = 786956502;
int var_7 = 956487452;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3731257311U;
int var_22 = 2112587505;
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

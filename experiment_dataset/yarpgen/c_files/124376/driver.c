#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10517;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2028252915U;
signed char var_7 = (signed char)121;
unsigned char var_8 = (unsigned char)123;
signed char var_9 = (signed char)93;
int zero = 0;
int var_10 = 1220770696;
unsigned short var_11 = (unsigned short)17964;
short var_12 = (short)-24917;
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

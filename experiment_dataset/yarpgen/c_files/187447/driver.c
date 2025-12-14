#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10915;
long long int var_1 = -4394327279993336168LL;
signed char var_6 = (signed char)16;
unsigned int var_8 = 3450216711U;
signed char var_9 = (signed char)121;
short var_13 = (short)-24725;
int zero = 0;
short var_14 = (short)14857;
unsigned long long int var_15 = 13535961470407148346ULL;
int var_16 = -928869254;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16344;
unsigned int var_1 = 3536777851U;
long long int var_2 = 4793140670938045462LL;
unsigned int var_5 = 1700257715U;
signed char var_10 = (signed char)18;
int zero = 0;
signed char var_11 = (signed char)81;
long long int var_12 = 5682749412559048721LL;
_Bool var_13 = (_Bool)0;
int var_14 = 1735660081;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

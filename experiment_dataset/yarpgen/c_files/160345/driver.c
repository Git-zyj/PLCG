#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3924553257241394864LL;
signed char var_3 = (signed char)38;
int var_5 = -1443549825;
signed char var_6 = (signed char)113;
int var_7 = 1488190550;
unsigned int var_8 = 2396193704U;
signed char var_9 = (signed char)69;
int zero = 0;
unsigned short var_10 = (unsigned short)36107;
signed char var_11 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

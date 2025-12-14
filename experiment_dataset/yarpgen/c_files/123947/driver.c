#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1376;
unsigned short var_9 = (unsigned short)23146;
short var_11 = (short)-31622;
int zero = 0;
signed char var_16 = (signed char)-53;
unsigned short var_17 = (unsigned short)63863;
signed char var_18 = (signed char)-101;
long long int var_19 = 8592560931098681096LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

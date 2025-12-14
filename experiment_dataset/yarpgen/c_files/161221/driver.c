#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 401677444;
int var_2 = 1068654755;
unsigned int var_3 = 1654433714U;
short var_5 = (short)-7629;
signed char var_7 = (signed char)-7;
int var_8 = -1913356609;
unsigned short var_11 = (unsigned short)50968;
unsigned short var_12 = (unsigned short)44982;
int zero = 0;
long long int var_13 = -7945997770905058133LL;
signed char var_14 = (signed char)26;
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

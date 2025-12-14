#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1922806261;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-20257;
signed char var_6 = (signed char)-93;
unsigned short var_7 = (unsigned short)25770;
signed char var_8 = (signed char)64;
signed char var_9 = (signed char)118;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1666000206;
signed char var_12 = (signed char)-53;
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

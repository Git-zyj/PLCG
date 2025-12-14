#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1368301133776879112LL;
unsigned long long int var_4 = 16138030126050953521ULL;
short var_7 = (short)711;
signed char var_8 = (signed char)-101;
unsigned long long int var_12 = 13616904448933261638ULL;
unsigned short var_14 = (unsigned short)34714;
unsigned long long int var_16 = 4094810764851640896ULL;
int zero = 0;
short var_19 = (short)20590;
signed char var_20 = (signed char)127;
unsigned long long int var_21 = 4572613177165425221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

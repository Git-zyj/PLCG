#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)107;
signed char var_3 = (signed char)6;
short var_5 = (short)-17406;
unsigned long long int var_7 = 15087413034815948927ULL;
unsigned char var_8 = (unsigned char)23;
unsigned char var_9 = (unsigned char)188;
unsigned int var_10 = 4254605861U;
unsigned long long int var_12 = 14344048398723397137ULL;
unsigned char var_15 = (unsigned char)61;
short var_16 = (short)914;
int zero = 0;
short var_17 = (short)-30044;
unsigned int var_18 = 3045971159U;
int var_19 = 870798068;
short var_20 = (short)-21941;
int var_21 = -1884474471;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

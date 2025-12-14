#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned char var_1 = (unsigned char)171;
int var_4 = -706173841;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)81;
short var_9 = (short)-29075;
int var_12 = 1118022261;
int zero = 0;
unsigned long long int var_13 = 9290356917354724594ULL;
unsigned int var_14 = 89653019U;
unsigned char var_15 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

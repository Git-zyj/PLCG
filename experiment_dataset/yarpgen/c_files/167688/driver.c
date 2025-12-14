#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6320212874491759449LL;
signed char var_4 = (signed char)-7;
unsigned int var_12 = 2933693119U;
unsigned short var_13 = (unsigned short)65388;
unsigned long long int var_15 = 15463541617036810409ULL;
int var_18 = -445754963;
int zero = 0;
short var_19 = (short)-8695;
signed char var_20 = (signed char)-83;
unsigned char var_21 = (unsigned char)47;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)69;
signed char var_5 = (signed char)-53;
long long int var_6 = -6626784171720538022LL;
long long int var_9 = 20146596547821032LL;
unsigned char var_12 = (unsigned char)201;
unsigned char var_15 = (unsigned char)226;
int var_16 = -1115650978;
unsigned long long int var_19 = 9812508865870381361ULL;
int zero = 0;
short var_20 = (short)11340;
signed char var_21 = (signed char)29;
void init() {
}

void checksum() {
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

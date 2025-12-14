#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 986718437413946549LL;
unsigned char var_9 = (unsigned char)61;
long long int var_12 = 767744861639342881LL;
unsigned short var_13 = (unsigned short)58134;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
short var_18 = (short)-5436;
short var_19 = (short)-23369;
short var_20 = (short)8498;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
_Bool var_8 = (_Bool)1;
int var_12 = 352279799;
short var_13 = (short)-11512;
unsigned short var_15 = (unsigned short)25197;
unsigned short var_17 = (unsigned short)9498;
int zero = 0;
signed char var_18 = (signed char)-47;
short var_19 = (short)1413;
unsigned long long int var_20 = 1308900342626646355ULL;
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

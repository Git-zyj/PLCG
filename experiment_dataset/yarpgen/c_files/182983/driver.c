#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8135719020005508845LL;
unsigned long long int var_7 = 17252536704758336647ULL;
signed char var_8 = (signed char)-69;
int var_10 = 59874226;
short var_11 = (short)-24317;
unsigned long long int var_13 = 9167908393429889688ULL;
unsigned long long int var_15 = 13544677616567475215ULL;
unsigned short var_16 = (unsigned short)13587;
int zero = 0;
int var_19 = 1795408184;
signed char var_20 = (signed char)-72;
void init() {
}

void checksum() {
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

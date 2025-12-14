#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3701;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6458337893590987790LL;
unsigned short var_9 = (unsigned short)11488;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 6397267954249707892ULL;
signed char var_20 = (signed char)112;
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

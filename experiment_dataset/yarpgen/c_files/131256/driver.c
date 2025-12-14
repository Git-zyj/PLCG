#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -8961503911229485819LL;
_Bool var_12 = (_Bool)0;
unsigned int var_15 = 2758948976U;
int zero = 0;
unsigned long long int var_17 = 9242537543719140846ULL;
unsigned long long int var_18 = 8267945331756545497ULL;
unsigned short var_19 = (unsigned short)11657;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

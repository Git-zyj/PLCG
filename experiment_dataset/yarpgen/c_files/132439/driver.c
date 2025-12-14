#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 3835646189076670139ULL;
unsigned int var_10 = 2831302087U;
unsigned long long int var_11 = 14545454209841095305ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17945375540875768263ULL;
short var_14 = (short)-25562;
signed char var_15 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

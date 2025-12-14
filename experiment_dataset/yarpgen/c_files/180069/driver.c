#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6817166246657915216ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 10180204350858301873ULL;
unsigned long long int var_7 = 5641399542153775855ULL;
unsigned int var_8 = 3199902929U;
signed char var_9 = (signed char)125;
int zero = 0;
short var_10 = (short)-26711;
int var_11 = -919385736;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

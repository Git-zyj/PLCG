#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7232529326278105432ULL;
short var_2 = (short)-31162;
unsigned long long int var_4 = 13360630658006687798ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)106;
void init() {
}

void checksum() {
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

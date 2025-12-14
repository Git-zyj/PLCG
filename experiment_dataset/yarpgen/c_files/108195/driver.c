#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1322993126;
_Bool var_4 = (_Bool)1;
long long int var_7 = -2400401657887032364LL;
signed char var_13 = (signed char)40;
signed char var_15 = (signed char)67;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3836444604U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

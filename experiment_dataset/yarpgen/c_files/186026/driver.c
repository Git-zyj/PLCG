#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
_Bool var_10 = (_Bool)0;
signed char var_16 = (signed char)111;
unsigned int var_18 = 3920887879U;
int zero = 0;
unsigned long long int var_19 = 16989351002850713022ULL;
int var_20 = -1799369606;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22012;
signed char var_7 = (signed char)62;
long long int var_13 = 4984889656024318849LL;
signed char var_18 = (signed char)29;
int zero = 0;
unsigned long long int var_19 = 15865997133691040507ULL;
long long int var_20 = 7870544171358118978LL;
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

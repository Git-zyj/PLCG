#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)69;
short var_13 = (short)-19860;
unsigned long long int var_17 = 10634502138221405360ULL;
int zero = 0;
int var_18 = -1037549735;
signed char var_19 = (signed char)-56;
short var_20 = (short)-17413;
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

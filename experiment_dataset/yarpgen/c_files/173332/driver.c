#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
short var_7 = (short)-2944;
unsigned long long int var_10 = 12899517567764302617ULL;
signed char var_17 = (signed char)-79;
int zero = 0;
int var_18 = 503552603;
unsigned int var_19 = 2905192870U;
signed char var_20 = (signed char)-77;
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

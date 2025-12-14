#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-24;
short var_8 = (short)16561;
short var_14 = (short)8823;
signed char var_15 = (signed char)-1;
int zero = 0;
unsigned long long int var_18 = 4091298057691179859ULL;
unsigned long long int var_19 = 17402268390958736370ULL;
unsigned int var_20 = 3474486327U;
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

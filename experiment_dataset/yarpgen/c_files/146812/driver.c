#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26385;
short var_2 = (short)14079;
short var_5 = (short)-3579;
signed char var_8 = (signed char)-61;
unsigned long long int var_10 = 620811201275000190ULL;
short var_12 = (short)-27472;
unsigned long long int var_13 = 8202680179902278074ULL;
short var_16 = (short)10287;
int zero = 0;
signed char var_17 = (signed char)-88;
unsigned long long int var_18 = 15918714239882691793ULL;
signed char var_19 = (signed char)-77;
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

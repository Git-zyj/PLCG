#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26280;
short var_4 = (short)24248;
int var_7 = 2057700740;
long long int var_8 = -6772732575297026478LL;
int zero = 0;
unsigned int var_10 = 2575261965U;
signed char var_11 = (signed char)41;
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

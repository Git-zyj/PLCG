#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
signed char var_2 = (signed char)67;
signed char var_7 = (signed char)-99;
signed char var_8 = (signed char)38;
unsigned long long int var_10 = 8296885851746967217ULL;
signed char var_11 = (signed char)-74;
int zero = 0;
unsigned long long int var_12 = 2077495723295427817ULL;
signed char var_13 = (signed char)37;
signed char var_14 = (signed char)60;
signed char var_15 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

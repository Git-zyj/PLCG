#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14429234252349976817ULL;
signed char var_8 = (signed char)-19;
int var_13 = -1820611365;
int zero = 0;
int var_18 = 1714403707;
signed char var_19 = (signed char)-101;
unsigned int var_20 = 204755070U;
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

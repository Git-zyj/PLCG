#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
int var_7 = -1888785168;
int var_8 = 1957103629;
signed char var_13 = (signed char)-47;
signed char var_14 = (signed char)15;
signed char var_15 = (signed char)-31;
int zero = 0;
int var_18 = -747790700;
unsigned int var_19 = 14275973U;
void init() {
}

void checksum() {
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

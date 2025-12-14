#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 255271084U;
unsigned int var_4 = 707207340U;
unsigned int var_6 = 4122595228U;
int zero = 0;
unsigned int var_11 = 718300744U;
signed char var_12 = (signed char)-31;
unsigned int var_13 = 3570750932U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

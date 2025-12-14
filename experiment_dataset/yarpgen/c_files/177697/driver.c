#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3629095576792362789LL;
int zero = 0;
unsigned long long int var_11 = 13488453413607387370ULL;
signed char var_12 = (signed char)124;
long long int var_13 = 4694196008966422539LL;
signed char var_14 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

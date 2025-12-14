#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2814417552774871413LL;
long long int var_4 = -4454491509171442961LL;
short var_8 = (short)23061;
int zero = 0;
long long int var_12 = 1387188295155358878LL;
unsigned long long int var_13 = 4655596254417048744ULL;
void init() {
}

void checksum() {
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

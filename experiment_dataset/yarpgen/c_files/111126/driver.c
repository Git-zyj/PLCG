#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1866657106U;
long long int var_3 = -29442521905699241LL;
unsigned long long int var_7 = 13281233305950315079ULL;
signed char var_9 = (signed char)24;
unsigned int var_10 = 1798924108U;
int zero = 0;
signed char var_12 = (signed char)-34;
unsigned int var_13 = 4075782336U;
unsigned int var_14 = 1190265561U;
void init() {
}

void checksum() {
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

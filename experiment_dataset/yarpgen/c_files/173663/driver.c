#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 650950804U;
unsigned long long int var_1 = 14810583507724292004ULL;
short var_2 = (short)14996;
unsigned long long int var_3 = 17737929182485094440ULL;
signed char var_5 = (signed char)-96;
long long int var_8 = -9173064875408774464LL;
signed char var_10 = (signed char)-19;
unsigned long long int var_11 = 7235174302751197774ULL;
int zero = 0;
short var_12 = (short)4957;
signed char var_13 = (signed char)-119;
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

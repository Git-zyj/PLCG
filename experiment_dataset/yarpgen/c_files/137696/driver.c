#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8655850913240554774ULL;
long long int var_5 = 3822040386467098288LL;
unsigned int var_7 = 1698793386U;
int var_9 = 810521906;
int zero = 0;
long long int var_10 = -8772113087792816482LL;
int var_11 = -1005132964;
unsigned char var_12 = (unsigned char)213;
int var_13 = 145647385;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

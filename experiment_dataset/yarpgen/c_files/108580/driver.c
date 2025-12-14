#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4881113512547020667ULL;
unsigned int var_3 = 422730600U;
int var_4 = -787484111;
signed char var_9 = (signed char)-87;
int var_10 = 914059481;
long long int var_13 = -490903425243185817LL;
int zero = 0;
signed char var_15 = (signed char)119;
signed char var_16 = (signed char)89;
signed char var_17 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5989148335972019743ULL;
unsigned long long int var_6 = 11655032662419510470ULL;
unsigned long long int var_8 = 9097474930028200893ULL;
int zero = 0;
long long int var_11 = -5037028665970801587LL;
signed char var_12 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

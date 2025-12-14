#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10409311273411152016ULL;
unsigned long long int var_11 = 4048839975240026401ULL;
int zero = 0;
unsigned long long int var_16 = 4508123513098725424ULL;
unsigned long long int var_17 = 18065497069359542626ULL;
void init() {
}

void checksum() {
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

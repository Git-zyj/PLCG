#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = -2111260426678086563LL;
unsigned long long int var_15 = 17444253683816244273ULL;
int zero = 0;
unsigned long long int var_19 = 17050264262575886538ULL;
int var_20 = -376753556;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

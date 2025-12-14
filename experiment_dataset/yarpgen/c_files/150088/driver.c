#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3221952787044707298ULL;
unsigned long long int var_7 = 13324269453699057284ULL;
_Bool var_8 = (_Bool)0;
int var_9 = -570601715;
long long int var_12 = 1965710348711089801LL;
int zero = 0;
unsigned int var_13 = 1565208581U;
long long int var_14 = -794925371345569752LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

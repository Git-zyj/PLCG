#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11844166230918178907ULL;
unsigned long long int var_6 = 6600403299433663362ULL;
long long int var_15 = 9092790585466060698LL;
unsigned long long int var_17 = 4295402075352277944ULL;
int zero = 0;
unsigned long long int var_18 = 5342536257599961175ULL;
int var_19 = -1557341377;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15117798392936521511ULL;
long long int var_2 = 7775903065587933520LL;
long long int var_3 = -5878596408470010379LL;
int var_5 = -928329923;
int var_6 = 109636508;
int var_7 = 897025940;
unsigned short var_10 = (unsigned short)58912;
unsigned long long int var_13 = 785099955481334323ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1099277072;
int var_22 = 1081291413;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

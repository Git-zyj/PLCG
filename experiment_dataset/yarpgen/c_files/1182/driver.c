#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 612232222466453214LL;
signed char var_4 = (signed char)98;
int var_5 = -1668149434;
_Bool var_6 = (_Bool)1;
long long int var_8 = -3610602934286786450LL;
int zero = 0;
int var_10 = 265997040;
int var_11 = 1441387401;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

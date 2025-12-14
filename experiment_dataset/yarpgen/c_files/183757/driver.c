#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4249472769391397726LL;
long long int var_2 = -2863045581786124753LL;
long long int var_3 = -8867359313948826202LL;
long long int var_4 = 2229189961659043980LL;
long long int var_5 = 3587427040746635275LL;
long long int var_8 = 5200399889349585093LL;
long long int var_10 = -2485317049579679859LL;
long long int var_11 = 1685351948099039858LL;
int zero = 0;
long long int var_14 = 8203381632198621554LL;
long long int var_15 = -4518761006190760463LL;
long long int var_16 = -5134303351705131442LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

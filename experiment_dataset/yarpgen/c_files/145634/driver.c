#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1112643868;
signed char var_5 = (signed char)-35;
unsigned short var_15 = (unsigned short)51390;
int zero = 0;
long long int var_18 = -1057188776173042388LL;
unsigned long long int var_19 = 16185085900716580246ULL;
long long int var_20 = 3965398281891842233LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

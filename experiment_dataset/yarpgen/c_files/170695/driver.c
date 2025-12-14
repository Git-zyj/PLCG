#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4922681203556422137ULL;
long long int var_2 = 4781741244267646935LL;
long long int var_4 = -4840603936578038265LL;
long long int var_9 = -5448066231070081845LL;
int zero = 0;
unsigned long long int var_10 = 11042988821631314042ULL;
signed char var_11 = (signed char)67;
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

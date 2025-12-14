#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1567901883;
signed char var_10 = (signed char)105;
long long int var_11 = 2756184817458326488LL;
int var_16 = 98176477;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15479186727471355256ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8552425696423688452LL;
long long int var_1 = 5086865472851333478LL;
int var_8 = -290723657;
unsigned int var_16 = 2887333251U;
int zero = 0;
long long int var_17 = -2786337851725551015LL;
unsigned long long int var_18 = 10694971365728467705ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8635599620633698960ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

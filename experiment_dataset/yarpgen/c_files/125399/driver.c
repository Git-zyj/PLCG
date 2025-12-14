#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11753595409146986532ULL;
_Bool var_7 = (_Bool)0;
int var_8 = -742011600;
int zero = 0;
unsigned long long int var_18 = 2552601661701609150ULL;
unsigned long long int var_19 = 9293518723787919040ULL;
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

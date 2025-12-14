#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13385666479149775019ULL;
unsigned long long int var_8 = 1985125757773644219ULL;
unsigned long long int var_13 = 5960585693526026607ULL;
int zero = 0;
signed char var_18 = (signed char)109;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8849302679521568955ULL;
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

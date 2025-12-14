#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1853082855;
unsigned long long int var_2 = 17129772068303218923ULL;
unsigned long long int var_9 = 7795614768001708637ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)60;
unsigned char var_19 = (unsigned char)31;
_Bool var_20 = (_Bool)0;
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

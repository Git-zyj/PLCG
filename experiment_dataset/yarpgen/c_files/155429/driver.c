#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17904;
int var_7 = 1112074108;
long long int var_9 = -294088006948910422LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 429197490U;
long long int var_20 = -5717885348411540184LL;
signed char var_21 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

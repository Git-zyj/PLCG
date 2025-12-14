#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5355836322304696339LL;
unsigned long long int var_5 = 1446941494585421483ULL;
short var_11 = (short)-24252;
int zero = 0;
short var_17 = (short)23567;
long long int var_18 = 7398526147813431542LL;
unsigned long long int var_19 = 10246433866149454042ULL;
_Bool var_20 = (_Bool)1;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3018409164219545083LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1722871051U;
int var_7 = 930700379;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 961605445U;
int zero = 0;
unsigned int var_10 = 2993215380U;
unsigned int var_11 = 3921872090U;
unsigned int var_12 = 4156161166U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

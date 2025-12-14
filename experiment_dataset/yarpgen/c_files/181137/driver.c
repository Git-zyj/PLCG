#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2035768740;
_Bool var_11 = (_Bool)1;
int var_13 = 1755712081;
unsigned long long int var_15 = 17639455501930857712ULL;
int zero = 0;
int var_18 = -1924145154;
int var_19 = 1449426501;
unsigned long long int var_20 = 14051911019979980538ULL;
long long int var_21 = 4499636750855532914LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
long long int var_12 = 7525187444540327925LL;
int zero = 0;
long long int var_13 = -6844045544886069081LL;
short var_14 = (short)13821;
long long int var_15 = 2755226118191741902LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

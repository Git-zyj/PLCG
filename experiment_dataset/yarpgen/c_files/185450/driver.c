#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 848933804;
int var_3 = -1768744744;
int var_9 = 1917247243;
int var_10 = -764574532;
int var_12 = 202799404;
int zero = 0;
int var_19 = 2134327835;
int var_20 = -903510438;
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

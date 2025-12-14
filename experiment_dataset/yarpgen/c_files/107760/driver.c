#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -552213019838961956LL;
signed char var_2 = (signed char)-3;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = -41992858518075753LL;
int var_13 = 1199164956;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

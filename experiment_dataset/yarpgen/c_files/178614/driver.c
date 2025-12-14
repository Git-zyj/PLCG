#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4248801873522813168LL;
signed char var_2 = (signed char)-125;
unsigned long long int var_3 = 7167251365289898648ULL;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)64148;
signed char var_11 = (signed char)-125;
unsigned long long int var_12 = 5756919459180915226ULL;
long long int var_13 = 7899789796152226519LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

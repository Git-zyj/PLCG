#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3320099875607482147LL;
short var_2 = (short)-26304;
signed char var_3 = (signed char)-44;
signed char var_4 = (signed char)-5;
short var_13 = (short)5214;
long long int var_16 = 7141692427227499317LL;
long long int var_17 = -9016869216275048381LL;
int zero = 0;
signed char var_18 = (signed char)-123;
long long int var_19 = 7163398413503070752LL;
long long int var_20 = -8687343145976468337LL;
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

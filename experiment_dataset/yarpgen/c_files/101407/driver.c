#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1574860727;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8518541453994159793ULL;
signed char var_5 = (signed char)71;
unsigned long long int var_9 = 1099417146737525403ULL;
int zero = 0;
int var_10 = 657464335;
unsigned long long int var_11 = 11624388832522123182ULL;
int var_12 = 151802664;
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

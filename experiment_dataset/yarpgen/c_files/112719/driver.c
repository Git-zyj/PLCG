#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5638064986204698292ULL;
unsigned long long int var_6 = 15786906378944695978ULL;
int zero = 0;
signed char var_10 = (signed char)85;
unsigned int var_11 = 4292136577U;
unsigned int var_12 = 3384266105U;
unsigned int var_13 = 1651546882U;
long long int var_14 = 1576880028758935900LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

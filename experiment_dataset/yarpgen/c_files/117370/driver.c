#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4375730556355637859LL;
unsigned int var_5 = 865600193U;
unsigned long long int var_6 = 7584120500874878132ULL;
signed char var_7 = (signed char)57;
unsigned int var_14 = 689081181U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11203622181358907462ULL;
long long int var_19 = -449293714941070404LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

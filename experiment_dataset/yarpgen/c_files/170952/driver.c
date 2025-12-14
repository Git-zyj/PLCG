#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2794571253481099425ULL;
signed char var_9 = (signed char)-9;
long long int var_11 = 4756245590002951307LL;
int zero = 0;
signed char var_12 = (signed char)-82;
signed char var_13 = (signed char)-43;
int var_14 = 493478594;
int var_15 = -31435467;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

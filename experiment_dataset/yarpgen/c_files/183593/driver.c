#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 4644949999292423470ULL;
int zero = 0;
unsigned long long int var_18 = 13100486707077040929ULL;
unsigned long long int var_19 = 16263680227383152727ULL;
_Bool var_20 = (_Bool)0;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2239158172U;
unsigned short var_5 = (unsigned short)46412;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 3161860046679685489ULL;
unsigned int var_12 = 208547979U;
unsigned short var_13 = (unsigned short)53312;
unsigned short var_14 = (unsigned short)7159;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

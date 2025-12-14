#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5355378364294541595LL;
int var_1 = 1609402793;
unsigned int var_2 = 1156614880U;
unsigned char var_6 = (unsigned char)197;
unsigned long long int var_11 = 15925052764385930683ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1115109637;
int var_14 = 1012032587;
void init() {
}

void checksum() {
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

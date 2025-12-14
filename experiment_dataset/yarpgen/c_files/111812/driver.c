#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)4;
int var_4 = -674330216;
unsigned long long int var_5 = 18284377757071852593ULL;
int zero = 0;
unsigned long long int var_10 = 14181872534292139436ULL;
int var_11 = -207826065;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)214;
_Bool var_14 = (_Bool)0;
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

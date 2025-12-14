#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)270;
unsigned long long int var_3 = 6783080284562275764ULL;
unsigned long long int var_7 = 11709044436777234325ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11501536682626016230ULL;
unsigned char var_12 = (unsigned char)201;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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

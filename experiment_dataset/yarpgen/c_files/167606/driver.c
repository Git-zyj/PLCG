#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)22657;
unsigned int var_10 = 3335781925U;
short var_11 = (short)13946;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 13759788514841919646ULL;
unsigned short var_18 = (unsigned short)54722;
unsigned int var_19 = 1522438148U;
int var_20 = -573868155;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9048893725350386165LL;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 447924120U;
unsigned char var_9 = (unsigned char)216;
unsigned int var_12 = 1046496296U;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1830055677;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)54660;
unsigned long long int var_17 = 17595815888906014823ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

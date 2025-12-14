#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 649966624U;
unsigned short var_1 = (unsigned short)53312;
_Bool var_2 = (_Bool)1;
int var_4 = -774738819;
unsigned char var_6 = (unsigned char)155;
signed char var_13 = (signed char)-38;
int zero = 0;
signed char var_14 = (signed char)49;
int var_15 = 99567311;
int var_16 = -378741618;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = -80069707;
int var_8 = -1739598097;
unsigned int var_11 = 3033039568U;
unsigned char var_15 = (unsigned char)194;
int zero = 0;
unsigned short var_20 = (unsigned short)11171;
unsigned long long int var_21 = 13585938381434509042ULL;
int var_22 = 902244229;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

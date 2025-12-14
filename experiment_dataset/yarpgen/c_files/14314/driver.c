#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5201;
unsigned long long int var_1 = 16106574611462269793ULL;
unsigned long long int var_2 = 2366637232057481385ULL;
long long int var_3 = -8109807912885021066LL;
unsigned long long int var_4 = 3494027239860296077ULL;
long long int var_5 = -5486992702436977962LL;
unsigned int var_6 = 609942214U;
unsigned short var_7 = (unsigned short)40218;
unsigned short var_8 = (unsigned short)25340;
unsigned long long int var_9 = 15465285124483746907ULL;
unsigned long long int var_10 = 2082478376458644470ULL;
unsigned int var_11 = 2326014799U;
int zero = 0;
unsigned long long int var_12 = 13008719749835492023ULL;
unsigned short var_13 = (unsigned short)29821;
void init() {
}

void checksum() {
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

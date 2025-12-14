#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56060;
signed char var_1 = (signed char)109;
unsigned char var_3 = (unsigned char)229;
unsigned char var_4 = (unsigned char)120;
long long int var_6 = -3321999926257803295LL;
int var_8 = 1187270173;
int zero = 0;
unsigned int var_10 = 198765717U;
long long int var_11 = -1795868395180014701LL;
long long int var_12 = -1443931259283569901LL;
unsigned long long int var_13 = 18177289266709513434ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

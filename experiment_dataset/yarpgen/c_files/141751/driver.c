#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7192242588053180204LL;
unsigned long long int var_4 = 18168928427574488776ULL;
unsigned int var_5 = 1585140517U;
long long int var_6 = -6816367712878961797LL;
unsigned int var_7 = 579429797U;
long long int var_8 = -7499074477259242387LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)250;
int zero = 0;
long long int var_11 = 3378415247297304364LL;
unsigned int var_12 = 1169138229U;
unsigned short var_13 = (unsigned short)35364;
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

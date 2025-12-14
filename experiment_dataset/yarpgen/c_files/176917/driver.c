#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
short var_2 = (short)8979;
unsigned short var_3 = (unsigned short)26090;
long long int var_4 = -281999510476638708LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 7766319339410595342LL;
long long int var_7 = -2033677164646648002LL;
long long int var_8 = -7984394329824431259LL;
int zero = 0;
short var_10 = (short)-28392;
short var_11 = (short)-13753;
signed char var_12 = (signed char)-60;
short var_13 = (short)27364;
short var_14 = (short)-12651;
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

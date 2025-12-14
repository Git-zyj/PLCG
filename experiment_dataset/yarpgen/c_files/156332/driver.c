#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
int var_1 = -1817234110;
unsigned long long int var_2 = 4746839190263368410ULL;
unsigned int var_3 = 2306338809U;
unsigned short var_4 = (unsigned short)54649;
long long int var_5 = -8470052151371696424LL;
unsigned char var_6 = (unsigned char)232;
short var_7 = (short)-29184;
long long int var_8 = 6466532424052226563LL;
unsigned int var_9 = 1093643244U;
int zero = 0;
signed char var_10 = (signed char)-101;
unsigned char var_11 = (unsigned char)249;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)20156;
short var_14 = (short)-5757;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25058;
_Bool var_1 = (_Bool)1;
int var_2 = -1386579561;
unsigned long long int var_4 = 1497943637991279581ULL;
signed char var_5 = (signed char)10;
unsigned char var_6 = (unsigned char)93;
unsigned long long int var_7 = 761662781406348890ULL;
unsigned long long int var_8 = 14247173291348234714ULL;
unsigned long long int var_10 = 7424766204329562731ULL;
int var_11 = -1653899173;
int zero = 0;
unsigned short var_12 = (unsigned short)58279;
long long int var_13 = -9064881522961537625LL;
unsigned int var_14 = 3892796530U;
long long int var_15 = -4816594898090378913LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

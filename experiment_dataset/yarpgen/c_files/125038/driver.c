#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 908817116U;
unsigned char var_6 = (unsigned char)40;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5977549971191546881ULL;
unsigned short var_9 = (unsigned short)58824;
long long int var_10 = 289265409679647441LL;
unsigned short var_11 = (unsigned short)41680;
int zero = 0;
unsigned short var_12 = (unsigned short)23857;
unsigned long long int var_13 = 275324827109891220ULL;
unsigned int var_14 = 3486198070U;
short var_15 = (short)-21098;
unsigned long long int var_16 = 9216665117421412603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

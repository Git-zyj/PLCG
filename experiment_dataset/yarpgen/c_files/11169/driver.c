#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12202673810386732595ULL;
_Bool var_1 = (_Bool)1;
int var_3 = -2102243377;
unsigned short var_4 = (unsigned short)25272;
long long int var_6 = 7317409925877931213LL;
int var_7 = -503332950;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)14;
int var_10 = -1096512082;
int zero = 0;
unsigned char var_13 = (unsigned char)14;
unsigned short var_14 = (unsigned short)40497;
short var_15 = (short)-12836;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-10372;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

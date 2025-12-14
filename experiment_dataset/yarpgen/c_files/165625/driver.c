#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned short var_2 = (unsigned short)54972;
long long int var_4 = 1439911538615968726LL;
unsigned int var_10 = 3070325864U;
unsigned char var_11 = (unsigned char)27;
short var_12 = (short)-560;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)5500;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-29962;
unsigned short var_19 = (unsigned short)27391;
unsigned short var_20 = (unsigned short)52452;
long long int var_21 = 1853299010308259781LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

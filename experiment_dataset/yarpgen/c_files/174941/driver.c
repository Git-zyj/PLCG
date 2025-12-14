#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)36309;
signed char var_2 = (signed char)87;
unsigned long long int var_8 = 2545633673302029687ULL;
unsigned char var_10 = (unsigned char)51;
unsigned char var_11 = (unsigned char)60;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)40;
short var_16 = (short)-15131;
int zero = 0;
signed char var_17 = (signed char)51;
long long int var_18 = 1782506692633634021LL;
short var_19 = (short)-29739;
unsigned short var_20 = (unsigned short)29169;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

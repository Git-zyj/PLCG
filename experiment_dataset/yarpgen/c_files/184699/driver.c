#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
_Bool var_1 = (_Bool)1;
short var_2 = (short)15762;
long long int var_4 = -1726982184298045533LL;
long long int var_5 = 2521278276497487563LL;
long long int var_7 = 374806503154730161LL;
unsigned char var_8 = (unsigned char)122;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-138;
int zero = 0;
unsigned int var_14 = 3786453221U;
long long int var_15 = -8723890259944144921LL;
unsigned char var_16 = (unsigned char)108;
unsigned char var_17 = (unsigned char)214;
short var_18 = (short)804;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

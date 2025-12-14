#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8638072479206579119LL;
unsigned short var_2 = (unsigned short)55846;
unsigned int var_3 = 2949472651U;
unsigned char var_5 = (unsigned char)225;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 2017947430212473600ULL;
unsigned int var_13 = 2793160616U;
signed char var_14 = (signed char)106;
int zero = 0;
signed char var_16 = (signed char)-79;
long long int var_17 = -81715764469603677LL;
int var_18 = -829952008;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

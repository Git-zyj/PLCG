#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1173584425;
unsigned short var_3 = (unsigned short)1458;
unsigned short var_5 = (unsigned short)55587;
unsigned long long int var_7 = 16635719638891113552ULL;
signed char var_12 = (signed char)60;
int var_13 = 848831970;
unsigned int var_14 = 1810070516U;
unsigned char var_17 = (unsigned char)126;
int var_18 = 534152487;
int zero = 0;
signed char var_19 = (signed char)57;
unsigned int var_20 = 3272461052U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)32485;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

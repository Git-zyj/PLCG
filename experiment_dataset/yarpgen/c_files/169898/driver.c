#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1040234471;
unsigned char var_2 = (unsigned char)108;
signed char var_3 = (signed char)-46;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)18411;
_Bool var_10 = (_Bool)0;
long long int var_11 = -7569493529578938773LL;
unsigned int var_12 = 2465258774U;
int zero = 0;
short var_13 = (short)3128;
signed char var_14 = (signed char)-8;
_Bool var_15 = (_Bool)0;
long long int var_16 = 7202417067725107557LL;
short var_17 = (short)-3714;
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

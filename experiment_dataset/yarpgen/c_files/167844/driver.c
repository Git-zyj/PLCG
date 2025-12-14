#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25907;
long long int var_4 = 6452543563553903543LL;
long long int var_6 = 2024683660903568216LL;
long long int var_8 = 4527041105765864314LL;
int var_11 = -545629850;
short var_12 = (short)-25060;
unsigned int var_14 = 2763548327U;
unsigned int var_16 = 1269969851U;
short var_18 = (short)-21486;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)142;
unsigned short var_21 = (unsigned short)29145;
unsigned short var_22 = (unsigned short)42138;
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

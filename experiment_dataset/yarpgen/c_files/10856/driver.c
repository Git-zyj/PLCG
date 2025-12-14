#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2798638185U;
signed char var_2 = (signed char)-95;
int var_3 = 1350753111;
unsigned short var_4 = (unsigned short)56548;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)251;
unsigned short var_7 = (unsigned short)63320;
signed char var_8 = (signed char)9;
int var_10 = 1707965106;
int zero = 0;
int var_12 = 1339547985;
unsigned char var_13 = (unsigned char)71;
int var_14 = -771683955;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

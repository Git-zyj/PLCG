#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15086548511723196735ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-15694;
short var_5 = (short)15567;
unsigned long long int var_6 = 12865909405169771319ULL;
short var_7 = (short)10582;
unsigned short var_8 = (unsigned short)8117;
int zero = 0;
unsigned short var_10 = (unsigned short)16631;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)33;
short var_13 = (short)-18357;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

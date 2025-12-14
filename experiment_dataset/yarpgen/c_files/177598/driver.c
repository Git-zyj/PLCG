#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46492;
long long int var_1 = 1709607729465444357LL;
long long int var_2 = 5592831898415483320LL;
unsigned short var_3 = (unsigned short)61330;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)8423;
unsigned short var_6 = (unsigned short)20582;
unsigned int var_11 = 2831614823U;
long long int var_13 = 1352075634078337971LL;
int zero = 0;
short var_17 = (short)-28905;
unsigned short var_18 = (unsigned short)26645;
short var_19 = (short)-25620;
long long int var_20 = -1984759306701614172LL;
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

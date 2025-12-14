#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9145470130095923403LL;
signed char var_1 = (signed char)-54;
unsigned short var_4 = (unsigned short)12999;
unsigned char var_6 = (unsigned char)126;
unsigned short var_8 = (unsigned short)17600;
_Bool var_9 = (_Bool)0;
short var_13 = (short)2140;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_19 = -6817868191383975193LL;
unsigned long long int var_20 = 14751764389393234103ULL;
unsigned char var_21 = (unsigned char)251;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
long long int var_2 = -7789838417043614541LL;
unsigned char var_6 = (unsigned char)100;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)11625;
int var_17 = 1233369343;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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

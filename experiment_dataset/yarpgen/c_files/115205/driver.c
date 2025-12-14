#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3177004003U;
_Bool var_5 = (_Bool)0;
int var_6 = -1921688839;
unsigned short var_7 = (unsigned short)24124;
signed char var_8 = (signed char)-90;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 627050676U;
unsigned char var_13 = (unsigned char)19;
unsigned long long int var_14 = 16233850846303427303ULL;
int zero = 0;
unsigned int var_19 = 3821022637U;
short var_20 = (short)2774;
void init() {
}

void checksum() {
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

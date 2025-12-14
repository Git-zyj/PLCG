#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
signed char var_4 = (signed char)-90;
signed char var_5 = (signed char)-55;
signed char var_6 = (signed char)89;
signed char var_8 = (signed char)27;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)152;
int zero = 0;
unsigned long long int var_20 = 3716040647780078865ULL;
unsigned short var_21 = (unsigned short)38690;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-4941;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

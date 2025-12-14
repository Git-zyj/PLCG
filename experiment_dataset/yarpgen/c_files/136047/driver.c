#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
int var_2 = -1289431777;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1358429371U;
unsigned int var_5 = 2602076262U;
unsigned char var_6 = (unsigned char)211;
unsigned int var_7 = 845707270U;
unsigned short var_8 = (unsigned short)132;
unsigned char var_11 = (unsigned char)108;
unsigned char var_12 = (unsigned char)250;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = -8980215313199734204LL;
unsigned int var_18 = 4126967136U;
void init() {
}

void checksum() {
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

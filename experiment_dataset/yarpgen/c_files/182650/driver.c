#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned short var_1 = (unsigned short)24735;
unsigned char var_2 = (unsigned char)13;
long long int var_3 = 2070005075010356996LL;
long long int var_6 = -815637309868030663LL;
unsigned short var_8 = (unsigned short)54088;
signed char var_9 = (signed char)-109;
unsigned char var_10 = (unsigned char)227;
unsigned short var_12 = (unsigned short)18249;
short var_13 = (short)12056;
int zero = 0;
unsigned long long int var_14 = 3487634178675290245ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

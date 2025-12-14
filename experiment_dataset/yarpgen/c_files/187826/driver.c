#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)4;
int var_2 = 1919482896;
int var_3 = -211224848;
signed char var_5 = (signed char)-77;
unsigned char var_6 = (unsigned char)76;
long long int var_8 = 5513784480735063504LL;
signed char var_9 = (signed char)-68;
int zero = 0;
short var_11 = (short)29182;
unsigned short var_12 = (unsigned short)6278;
long long int var_13 = -4630322336328052203LL;
unsigned short var_14 = (unsigned short)2390;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

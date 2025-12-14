#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1223381031;
int var_2 = 286877037;
int var_3 = 1906702350;
short var_4 = (short)10684;
signed char var_6 = (signed char)-35;
long long int var_8 = -6662151678631173328LL;
long long int var_9 = -1570524362612396754LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)901;
int zero = 0;
unsigned short var_12 = (unsigned short)36859;
signed char var_13 = (signed char)98;
void init() {
}

void checksum() {
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

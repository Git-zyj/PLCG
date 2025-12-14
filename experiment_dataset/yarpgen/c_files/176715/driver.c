#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6835927309640463597LL;
signed char var_4 = (signed char)-73;
unsigned short var_5 = (unsigned short)55679;
unsigned char var_6 = (unsigned char)150;
int var_7 = 1054167491;
long long int var_9 = -2052859565545725101LL;
long long int var_11 = 589070331817721806LL;
long long int var_12 = -624556924025419789LL;
long long int var_17 = -1852616823375897963LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)17;
unsigned short var_20 = (unsigned short)18563;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -362396517;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)53;
unsigned short var_7 = (unsigned short)62830;
long long int var_11 = 7618299885583468026LL;
unsigned short var_14 = (unsigned short)3875;
signed char var_15 = (signed char)-119;
int var_18 = 149536415;
int zero = 0;
long long int var_20 = -7887954240330694435LL;
int var_21 = 1871752789;
void init() {
}

void checksum() {
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

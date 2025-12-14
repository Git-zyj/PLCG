#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55545;
unsigned short var_1 = (unsigned short)15375;
long long int var_3 = 726931476893162738LL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)54032;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-95;
int zero = 0;
long long int var_13 = 5435351795814077286LL;
unsigned short var_14 = (unsigned short)40934;
unsigned short var_15 = (unsigned short)31648;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

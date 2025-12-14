#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5732;
unsigned short var_3 = (unsigned short)3851;
unsigned int var_4 = 3025435113U;
unsigned long long int var_5 = 17623044373378212490ULL;
unsigned short var_7 = (unsigned short)30631;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-89;
long long int var_12 = 1659764041970206545LL;
short var_13 = (short)22639;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

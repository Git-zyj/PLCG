#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41735;
signed char var_2 = (signed char)51;
unsigned char var_3 = (unsigned char)123;
int var_6 = -564834382;
int var_8 = -370238425;
_Bool var_9 = (_Bool)1;
int var_14 = -739114826;
unsigned int var_15 = 3315443938U;
int zero = 0;
unsigned int var_19 = 2060119707U;
signed char var_20 = (signed char)54;
unsigned short var_21 = (unsigned short)61162;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

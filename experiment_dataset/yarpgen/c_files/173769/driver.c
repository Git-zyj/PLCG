#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3148700257U;
long long int var_2 = -6623654434832334756LL;
unsigned int var_3 = 2843019816U;
signed char var_7 = (signed char)94;
int var_10 = 630658836;
short var_11 = (short)32508;
unsigned char var_13 = (unsigned char)38;
unsigned short var_14 = (unsigned short)49873;
long long int var_17 = 5970645387442039465LL;
int zero = 0;
unsigned int var_18 = 1905310865U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-90;
int var_22 = 292781500;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

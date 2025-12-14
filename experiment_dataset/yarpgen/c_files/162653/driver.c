#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
short var_1 = (short)24054;
int var_3 = -156865672;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)169;
unsigned long long int var_10 = 1263095154552724141ULL;
int var_11 = -976791156;
signed char var_12 = (signed char)-67;
signed char var_13 = (signed char)-94;
int var_15 = -873881640;
unsigned long long int var_16 = 10185318124919524444ULL;
int zero = 0;
int var_18 = 797507710;
signed char var_19 = (signed char)-28;
signed char var_20 = (signed char)-20;
short var_21 = (short)31334;
unsigned int var_22 = 1689370852U;
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

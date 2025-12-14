#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-12;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6009791932308646242LL;
int var_12 = -1823749171;
short var_13 = (short)17321;
unsigned int var_14 = 1718418976U;
int var_18 = -985921687;
int zero = 0;
short var_19 = (short)-2939;
unsigned char var_20 = (unsigned char)121;
short var_21 = (short)18586;
int var_22 = -875836290;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
signed char var_1 = (signed char)23;
_Bool var_2 = (_Bool)1;
long long int var_4 = -1078556208458389531LL;
signed char var_6 = (signed char)81;
signed char var_7 = (signed char)95;
unsigned char var_8 = (unsigned char)50;
short var_12 = (short)7334;
signed char var_13 = (signed char)-27;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-4749;
signed char var_18 = (signed char)11;
int zero = 0;
signed char var_19 = (signed char)-55;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1423431603U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 162842893627564037LL;
signed char var_3 = (signed char)-108;
long long int var_16 = 221568738899089361LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)92;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)11947;
long long int var_21 = -7799738860323605362LL;
int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -144906681;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

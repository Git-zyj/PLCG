#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1210032279838409880LL;
unsigned char var_4 = (unsigned char)183;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)28828;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
long long int var_18 = -4258672722033740943LL;
unsigned long long int var_19 = 8818916334911085288ULL;
unsigned char var_20 = (unsigned char)89;
unsigned int var_21 = 1458026738U;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)49;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

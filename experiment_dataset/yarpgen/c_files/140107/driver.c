#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -58526747;
unsigned int var_5 = 3497968089U;
signed char var_8 = (signed char)-72;
short var_11 = (short)9309;
unsigned long long int var_15 = 12766584005484872681ULL;
unsigned short var_16 = (unsigned short)52940;
int var_17 = -645327438;
long long int var_18 = 8942405578600633512LL;
unsigned char var_19 = (unsigned char)146;
int zero = 0;
long long int var_20 = 5340274022315358542LL;
unsigned long long int var_21 = 9232918280491125569ULL;
unsigned int var_22 = 3958897666U;
unsigned int var_23 = 3482138955U;
unsigned short var_24 = (unsigned short)46782;
signed char arr_1 [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 15213554191994548916ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

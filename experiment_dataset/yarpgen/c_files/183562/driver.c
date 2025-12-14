#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15054;
int var_9 = -639495402;
unsigned char var_11 = (unsigned char)196;
unsigned int var_13 = 4120883370U;
long long int var_15 = 312952321025069008LL;
unsigned char var_16 = (unsigned char)250;
unsigned char var_17 = (unsigned char)151;
short var_18 = (short)-28635;
int zero = 0;
unsigned long long int var_20 = 12337766735544236356ULL;
unsigned char var_21 = (unsigned char)124;
long long int var_22 = 8984955075556735224LL;
short var_23 = (short)-31380;
unsigned char var_24 = (unsigned char)225;
unsigned char arr_2 [17] ;
unsigned char arr_3 [17] [17] ;
unsigned int arr_4 [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 793438455U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1743097528;
_Bool var_7 = (_Bool)0;
int var_8 = -384148143;
short var_10 = (short)-28757;
int zero = 0;
short var_11 = (short)-29469;
unsigned long long int var_12 = 9736448971079400528ULL;
unsigned long long int var_13 = 784977923512327155ULL;
signed char var_14 = (signed char)-1;
unsigned long long int var_15 = 17561565988602310969ULL;
short var_16 = (short)20850;
unsigned long long int var_17 = 2435174405579517914ULL;
signed char arr_0 [10] ;
long long int arr_1 [10] ;
long long int arr_6 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2378709491827249389LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -6268443714906977601LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

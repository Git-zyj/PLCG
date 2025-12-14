#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16886;
int var_5 = 282025154;
signed char var_7 = (signed char)59;
unsigned short var_8 = (unsigned short)60692;
long long int var_11 = -478836929772688640LL;
int zero = 0;
short var_17 = (short)18395;
short var_18 = (short)-5566;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)58;
long long int var_21 = -2546008680468155238LL;
long long int arr_0 [17] ;
unsigned char arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -3365320765394761160LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)176;
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

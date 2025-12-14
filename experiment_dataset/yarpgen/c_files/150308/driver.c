#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
_Bool var_2 = (_Bool)1;
int var_3 = -419583821;
unsigned short var_6 = (unsigned short)14089;
short var_7 = (short)20039;
long long int var_9 = -2499597205483186371LL;
int zero = 0;
signed char var_11 = (signed char)-69;
unsigned long long int var_12 = 5737461635569071312ULL;
long long int var_13 = -971806592486518888LL;
unsigned char var_14 = (unsigned char)238;
unsigned char var_15 = (unsigned char)214;
int arr_0 [14] ;
long long int arr_1 [14] ;
unsigned char arr_3 [14] ;
unsigned short arr_4 [14] ;
short arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2007924488;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4148720414348685914LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)12701;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)6130;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

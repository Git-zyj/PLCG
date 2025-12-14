#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18148;
unsigned int var_4 = 2415150859U;
unsigned short var_8 = (unsigned short)52781;
unsigned int var_18 = 1299655202U;
int zero = 0;
unsigned char var_20 = (unsigned char)58;
int var_21 = -1219488817;
unsigned int var_22 = 2075184180U;
long long int var_23 = 8482366410215813319LL;
unsigned short var_24 = (unsigned short)38190;
unsigned long long int var_25 = 5300040088796279342ULL;
signed char var_26 = (signed char)-83;
short var_27 = (short)-26524;
unsigned int var_28 = 3137126576U;
short var_29 = (short)4297;
unsigned short var_30 = (unsigned short)2649;
long long int var_31 = 8065947910988674357LL;
unsigned int arr_0 [17] ;
short arr_1 [17] ;
long long int arr_2 [17] [17] ;
unsigned char arr_3 [17] [17] ;
short arr_8 [23] ;
long long int arr_9 [23] ;
long long int arr_11 [15] ;
int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 568367883U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)11091;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -2095122342851572751LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)29427;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -4432447764663489782LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 1723614935627149813LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1547653705;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

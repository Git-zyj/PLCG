#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -912210392;
short var_2 = (short)32519;
long long int var_6 = 1314847304203233064LL;
unsigned char var_7 = (unsigned char)124;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_18 = 5210558471797918105ULL;
int zero = 0;
signed char var_19 = (signed char)26;
long long int var_20 = 3311438428622492265LL;
unsigned int var_21 = 3862289968U;
unsigned long long int var_22 = 4084336988247664708ULL;
int arr_0 [25] ;
int arr_1 [25] ;
short arr_2 [25] ;
unsigned int arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1831108592;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -575262637;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-10260 : (short)-25110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 857540607U : 2087948465U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2071254577U : 2414568204U;
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

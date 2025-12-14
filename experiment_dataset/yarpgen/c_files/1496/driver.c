#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
signed char var_2 = (signed char)-74;
unsigned short var_4 = (unsigned short)45902;
long long int var_5 = -3048255228534425961LL;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-43;
unsigned short var_16 = (unsigned short)6114;
int zero = 0;
unsigned short var_17 = (unsigned short)16259;
signed char var_18 = (signed char)-50;
signed char var_19 = (signed char)-116;
short var_20 = (short)30740;
short var_21 = (short)4970;
long long int var_22 = 6994668192937690987LL;
unsigned int var_23 = 2333964841U;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)15149;
unsigned long long int arr_1 [25] ;
long long int arr_2 [25] [25] ;
unsigned int arr_3 [25] ;
long long int arr_4 [25] [25] ;
unsigned short arr_5 [25] [25] [25] ;
signed char arr_11 [25] [25] [25] [25] [25] ;
unsigned long long int arr_14 [21] ;
unsigned int arr_15 [21] ;
signed char arr_12 [25] [25] [25] [25] ;
short arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7512946515608429426ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -917187407142385203LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3806907975U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 5046253248364394364LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)7029;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 1340739727389398097ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 859457701U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)23 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)-8886;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

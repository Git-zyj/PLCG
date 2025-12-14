#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned long long int var_2 = 5563636350580692278ULL;
unsigned long long int var_4 = 10713813724749709155ULL;
unsigned short var_5 = (unsigned short)61241;
long long int var_6 = 8101753084290618266LL;
unsigned int var_7 = 3520496220U;
unsigned int var_8 = 1093155670U;
long long int var_11 = -5794541376701912286LL;
unsigned short var_12 = (unsigned short)21465;
long long int var_14 = -8271523411377921930LL;
unsigned int var_16 = 140517705U;
unsigned short var_17 = (unsigned short)32685;
unsigned short var_18 = (unsigned short)58420;
int zero = 0;
unsigned int var_19 = 3226164806U;
unsigned char var_20 = (unsigned char)120;
unsigned char var_21 = (unsigned char)244;
unsigned short var_22 = (unsigned short)724;
unsigned long long int arr_0 [12] [12] ;
unsigned short arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
unsigned short arr_4 [12] ;
unsigned short arr_5 [12] [12] [12] ;
long long int arr_6 [12] ;
unsigned int arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4384127150052849714ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48638;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)61581;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)37003;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)58843;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -3475017371594452388LL : 3556845411030412549LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 2246981491U : 2191878767U;
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

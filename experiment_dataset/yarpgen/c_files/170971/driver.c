#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -742818111;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2553973318U;
unsigned char var_4 = (unsigned char)140;
unsigned char var_7 = (unsigned char)226;
short var_8 = (short)13395;
unsigned char var_9 = (unsigned char)217;
int var_11 = 1203528367;
unsigned char var_14 = (unsigned char)242;
int zero = 0;
int var_15 = 1921134060;
unsigned long long int var_16 = 16648844821642333795ULL;
unsigned long long int var_17 = 12255087160715583207ULL;
unsigned long long int var_18 = 7026149480142474297ULL;
unsigned long long int var_19 = 957409044053912867ULL;
unsigned char var_20 = (unsigned char)145;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)212;
unsigned long long int var_23 = 1083250004241620694ULL;
unsigned char var_24 = (unsigned char)0;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_3 [17] [17] [17] ;
unsigned int arr_4 [17] [17] ;
_Bool arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] ;
unsigned char arr_14 [22] [22] ;
unsigned long long int arr_15 [22] [22] [22] ;
unsigned char arr_18 [22] [22] [22] ;
unsigned long long int arr_20 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_21 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 9904385771713572685ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 5165229677910093964ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 12214412383956950662ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 547356767U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3228233988U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 17148979238197137556ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 4517956471891096172ULL : 3665746192288019309ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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

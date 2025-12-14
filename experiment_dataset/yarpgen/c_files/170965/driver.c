#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3552493089U;
long long int var_6 = -8206577893086595426LL;
unsigned long long int var_11 = 17232073139330329745ULL;
unsigned long long int var_15 = 5028722540044085980ULL;
long long int var_18 = -1169124283559742229LL;
int zero = 0;
unsigned long long int var_19 = 17870207724960560717ULL;
long long int var_20 = 2719140259653275142LL;
long long int var_21 = -8423418619252477947LL;
unsigned long long int var_22 = 14052735706860927710ULL;
int var_23 = -1640655749;
long long int arr_3 [22] ;
long long int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6136005986517813960LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -191496210151012335LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

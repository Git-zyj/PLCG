#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26196;
long long int var_1 = -1088666393177993487LL;
signed char var_2 = (signed char)126;
long long int var_4 = -5074983971611204830LL;
long long int var_5 = 5652020949228009275LL;
long long int var_7 = 7831698373225623317LL;
long long int var_8 = -6498235260091922096LL;
int zero = 0;
long long int var_10 = -6016734862552056823LL;
signed char var_11 = (signed char)-48;
long long int var_12 = -4525902130771510679LL;
unsigned short var_13 = (unsigned short)13477;
signed char var_14 = (signed char)-77;
unsigned short var_15 = (unsigned short)57809;
long long int arr_2 [10] ;
unsigned short arr_15 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1407031308966235837LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)12670;
}

void checksum() {
    hash(&seed, var_10);
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

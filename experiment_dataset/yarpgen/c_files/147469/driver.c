#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5747202419088934869ULL;
long long int var_4 = -6454830245461010410LL;
signed char var_5 = (signed char)94;
unsigned long long int var_11 = 7034421789946587756ULL;
int zero = 0;
long long int var_12 = -8932914727243650831LL;
short var_13 = (short)-17112;
unsigned long long int var_14 = 1070834785324915200ULL;
unsigned int var_15 = 3878499188U;
unsigned long long int var_16 = 2758412714973196931ULL;
short var_17 = (short)-18546;
int var_18 = -13138848;
unsigned long long int arr_0 [14] [14] ;
long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 11453076784143922009ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -5133964706815164858LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

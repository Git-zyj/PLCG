#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11698636613210604019ULL;
unsigned long long int var_5 = 16328405505008233676ULL;
int var_7 = -811871116;
int var_8 = 1282590630;
short var_9 = (short)-25682;
unsigned long long int var_12 = 753170060202267442ULL;
unsigned long long int var_16 = 6721797686167174535ULL;
int zero = 0;
signed char var_18 = (signed char)96;
short var_19 = (short)24208;
unsigned char var_20 = (unsigned char)195;
unsigned int var_21 = 1385235576U;
signed char arr_1 [19] ;
long long int arr_3 [19] ;
unsigned char arr_4 [19] [19] ;
unsigned long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 5914443086026449318LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)132 : (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 7792134523288767108ULL;
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
int var_6 = -161775812;
signed char var_9 = (signed char)-40;
signed char var_10 = (signed char)-29;
long long int var_12 = 116101697839445169LL;
long long int var_14 = 662944936318536107LL;
int zero = 0;
unsigned char var_15 = (unsigned char)215;
unsigned short var_16 = (unsigned short)39158;
signed char var_17 = (signed char)58;
unsigned char var_18 = (unsigned char)80;
unsigned long long int var_19 = 10865209580703751661ULL;
unsigned short var_20 = (unsigned short)40519;
long long int var_21 = -3682126825825345130LL;
int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 967361467 : 204836300;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33734 : (unsigned short)36618;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 15036130130034717178ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1201880044U : 625205729U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

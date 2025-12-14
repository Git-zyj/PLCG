#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3801835047881873489LL;
unsigned char var_3 = (unsigned char)18;
unsigned char var_4 = (unsigned char)144;
unsigned long long int var_5 = 16048938718472069456ULL;
int var_6 = 576935544;
unsigned long long int var_8 = 8611094905342624160ULL;
unsigned long long int var_10 = 8458816142373354225ULL;
unsigned char var_11 = (unsigned char)188;
unsigned char var_13 = (unsigned char)91;
_Bool var_15 = (_Bool)1;
unsigned char var_18 = (unsigned char)23;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8829229438913883321LL;
long long int var_21 = 3273631752138511681LL;
unsigned long long int var_22 = 16283263140417264430ULL;
unsigned char var_23 = (unsigned char)6;
unsigned char var_24 = (unsigned char)148;
unsigned char var_25 = (unsigned char)245;
unsigned char var_26 = (unsigned char)138;
long long int var_27 = 672791515890938460LL;
unsigned long long int arr_10 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_14 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13450117523034258430ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)7;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

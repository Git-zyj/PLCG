#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14892;
unsigned long long int var_3 = 10978369922596570777ULL;
int var_4 = -947091211;
long long int var_5 = 3141027841998129637LL;
_Bool var_7 = (_Bool)1;
int var_8 = -531151178;
unsigned short var_10 = (unsigned short)5471;
unsigned short var_12 = (unsigned short)3255;
unsigned long long int var_15 = 9992058580330650397ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 120266556;
unsigned short var_19 = (unsigned short)15462;
long long int var_20 = 2862723635876615366LL;
unsigned long long int var_21 = 4306388525599636880ULL;
unsigned short arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
signed char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)27460;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 13244620012493919369ULL : 3243944016802102248ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-65;
}

void checksum() {
    hash(&seed, var_17);
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

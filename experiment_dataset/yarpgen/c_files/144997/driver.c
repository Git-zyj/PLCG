#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9552859341615901310ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8166616274714153889ULL;
long long int var_5 = -3364035303198463225LL;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_17 = -7806134599535517917LL;
int zero = 0;
unsigned long long int var_19 = 1373467251429302385ULL;
unsigned int var_20 = 3810742829U;
int var_21 = 298004966;
long long int var_22 = -8104460126990781670LL;
signed char arr_8 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4449555648037191278LL;
unsigned int var_1 = 2369350130U;
unsigned long long int var_2 = 3360763231786357907ULL;
int var_3 = 824630368;
long long int var_4 = -5202158921929565370LL;
unsigned long long int var_5 = 15805434031574587079ULL;
long long int var_6 = 2309781973417772693LL;
signed char var_8 = (signed char)33;
unsigned long long int var_9 = 8219725613883665832ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-94;
int zero = 0;
unsigned short var_12 = (unsigned short)27240;
signed char var_13 = (signed char)77;
unsigned short var_14 = (unsigned short)3290;
unsigned long long int var_15 = 17525338757914085277ULL;
int var_16 = 1402989823;
unsigned long long int arr_2 [11] [11] ;
long long int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2097811004524665994ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4498167155039190914LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

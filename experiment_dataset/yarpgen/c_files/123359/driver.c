#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3723016442291777984LL;
long long int var_3 = 3912021140294967575LL;
long long int var_6 = -5127404157687357197LL;
unsigned int var_7 = 300204121U;
unsigned int var_11 = 10245870U;
signed char var_12 = (signed char)105;
unsigned int var_17 = 746948345U;
int zero = 0;
long long int var_18 = 6876915609008575140LL;
int var_19 = -1359905123;
signed char var_20 = (signed char)50;
unsigned short var_21 = (unsigned short)27594;
long long int var_22 = 4856031644346426936LL;
int var_23 = -2123159030;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
long long int arr_2 [12] [12] ;
int arr_3 [24] ;
int arr_4 [24] [24] ;
unsigned int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 444199926U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 274330026232159571LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 424323096;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 775412929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3306587728U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6739864193961264577ULL;
unsigned long long int var_1 = 2372512561433851040ULL;
unsigned char var_2 = (unsigned char)18;
long long int var_4 = -1579002932474335694LL;
unsigned long long int var_5 = 17353813979352884139ULL;
long long int var_7 = 8028625279386687527LL;
short var_8 = (short)-21372;
long long int var_9 = 8329460004492941068LL;
unsigned char var_10 = (unsigned char)110;
long long int var_12 = -189287314975339825LL;
unsigned short var_13 = (unsigned short)41473;
long long int var_14 = 5204657962029226388LL;
int var_15 = 23748072;
unsigned short var_16 = (unsigned short)55657;
signed char var_17 = (signed char)81;
int zero = 0;
int var_18 = 463545434;
long long int var_19 = 321056397862066006LL;
long long int var_20 = 2319300816563748837LL;
int var_21 = 317552852;
long long int var_22 = -8745589841889770516LL;
long long int arr_1 [18] ;
short arr_2 [18] ;
unsigned long long int arr_12 [24] [24] ;
int arr_7 [18] ;
unsigned char arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1041417959518330802LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-7146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 18234639880590138336ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -528613748;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned char)147;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

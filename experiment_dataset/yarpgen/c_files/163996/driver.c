#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17258356657262673858ULL;
unsigned long long int var_9 = 15759735967835588826ULL;
signed char var_10 = (signed char)-20;
unsigned int var_11 = 982830043U;
unsigned long long int var_15 = 17490018476824316864ULL;
int zero = 0;
unsigned int var_18 = 2397997592U;
unsigned int var_19 = 23517330U;
unsigned int var_20 = 809863261U;
unsigned int var_21 = 1620129904U;
unsigned int var_22 = 3701145722U;
unsigned int var_23 = 1374562147U;
unsigned long long int var_24 = 4257828524883518732ULL;
unsigned int arr_0 [10] [10] ;
unsigned long long int arr_2 [10] [10] [10] ;
unsigned int arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3620052927U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15160310665282438211ULL : 1007155388064572263ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1899970743U : 3029237550U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

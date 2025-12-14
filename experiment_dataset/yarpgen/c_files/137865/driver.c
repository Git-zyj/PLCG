#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4617098157214565666ULL;
signed char var_5 = (signed char)1;
signed char var_6 = (signed char)-63;
long long int var_7 = -7580808209072122811LL;
unsigned char var_10 = (unsigned char)52;
int zero = 0;
signed char var_11 = (signed char)45;
long long int var_12 = 5854497607319118859LL;
long long int var_13 = 9212073109392733239LL;
unsigned int var_14 = 84946571U;
unsigned long long int arr_0 [14] ;
int arr_7 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 10935310873173967767ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -222260449;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

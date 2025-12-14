#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8778729840629129334ULL;
signed char var_7 = (signed char)83;
unsigned long long int var_9 = 9171744270207910874ULL;
unsigned long long int var_10 = 14785272207705621033ULL;
unsigned long long int var_14 = 17030525244013112577ULL;
signed char var_16 = (signed char)-46;
int zero = 0;
long long int var_20 = -1065351511482854968LL;
long long int var_21 = -482506553781105864LL;
unsigned char var_22 = (unsigned char)34;
long long int var_23 = -4751842917650945734LL;
int var_24 = -1151141229;
signed char arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned char arr_4 [15] [15] [15] ;
signed char arr_5 [15] [15] ;
long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -527334703;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1157629186956526347LL;
}

void checksum() {
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

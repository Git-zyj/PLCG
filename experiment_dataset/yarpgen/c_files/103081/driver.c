#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54957;
short var_7 = (short)15686;
unsigned short var_8 = (unsigned short)9360;
signed char var_11 = (signed char)-3;
int zero = 0;
unsigned long long int var_13 = 9570999579600847341ULL;
long long int var_14 = 6887795996995228893LL;
unsigned int var_15 = 3839016980U;
long long int var_16 = -5553192070896080910LL;
long long int arr_3 [10] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -5195146826113471269LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -1159798081;
}

void checksum() {
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

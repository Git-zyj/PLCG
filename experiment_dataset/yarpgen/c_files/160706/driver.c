#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
int var_2 = 870540296;
unsigned char var_3 = (unsigned char)156;
long long int var_5 = 6811421968905739593LL;
unsigned char var_7 = (unsigned char)48;
signed char var_12 = (signed char)105;
int zero = 0;
unsigned int var_16 = 3463487658U;
int var_17 = -1615180418;
unsigned long long int var_18 = 12699867712006600398ULL;
int var_19 = -556072424;
int var_20 = 1151097726;
short arr_0 [22] ;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-9978;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)36952;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

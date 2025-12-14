#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1834020048;
long long int var_2 = -5924317729665724361LL;
unsigned int var_3 = 64269258U;
unsigned long long int var_6 = 14661268821578306314ULL;
unsigned long long int var_10 = 16488803965639755660ULL;
unsigned int var_11 = 2611867907U;
int zero = 0;
unsigned int var_12 = 1339098070U;
unsigned short var_13 = (unsigned short)12643;
short var_14 = (short)-21312;
signed char var_15 = (signed char)-61;
long long int arr_0 [22] ;
signed char arr_2 [22] ;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 5868856592272707567LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)-109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)24246;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

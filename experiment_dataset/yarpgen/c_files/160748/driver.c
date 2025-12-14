#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7793576285382598240LL;
short var_5 = (short)-30812;
unsigned long long int var_7 = 6657826853090582742ULL;
signed char var_9 = (signed char)13;
unsigned short var_13 = (unsigned short)21966;
int zero = 0;
unsigned long long int var_14 = 5428404820021290897ULL;
int var_15 = 124597469;
unsigned int var_16 = 3744919816U;
signed char var_17 = (signed char)2;
unsigned char var_18 = (unsigned char)188;
unsigned long long int arr_2 [17] [17] ;
int arr_3 [17] ;
unsigned char arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 12003411857744148047ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -2122947564;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)32;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

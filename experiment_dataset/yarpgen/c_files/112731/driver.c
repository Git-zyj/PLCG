#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27951;
long long int var_1 = -194122140802011204LL;
unsigned char var_4 = (unsigned char)41;
long long int var_5 = -541696841766766178LL;
unsigned char var_9 = (unsigned char)102;
short var_10 = (short)-14802;
int zero = 0;
unsigned long long int var_13 = 8606050135167196208ULL;
int var_14 = 1169264554;
unsigned int var_15 = 3899485312U;
unsigned long long int var_16 = 14995114273007392481ULL;
unsigned char arr_4 [22] [22] ;
int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)237 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -1883644394;
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

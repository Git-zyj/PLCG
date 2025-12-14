#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned short var_2 = (unsigned short)56497;
short var_4 = (short)2242;
long long int var_5 = -1556716135190132366LL;
unsigned int var_8 = 4155360671U;
unsigned char var_9 = (unsigned char)79;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4250818460961157981LL;
long long int var_13 = 2288820591296136716LL;
unsigned long long int var_14 = 10365706597112446979ULL;
long long int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 2260412509095230838LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

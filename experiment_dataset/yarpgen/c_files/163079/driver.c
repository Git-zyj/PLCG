#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -840266196;
unsigned short var_2 = (unsigned short)18222;
signed char var_9 = (signed char)-9;
unsigned char var_11 = (unsigned char)83;
unsigned char var_13 = (unsigned char)133;
int var_14 = -1019932212;
unsigned long long int var_15 = 13323549858760486574ULL;
unsigned int var_17 = 4105010703U;
int zero = 0;
long long int var_20 = -7657623062654975535LL;
int var_21 = -385469016;
signed char var_22 = (signed char)-64;
unsigned long long int var_23 = 1029833471149952320ULL;
unsigned long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 12886169443329917382ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

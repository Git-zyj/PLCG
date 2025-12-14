#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -141101463;
short var_6 = (short)21302;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)86;
unsigned short var_11 = (unsigned short)24699;
short var_13 = (short)-26058;
long long int var_14 = -7246283575422912083LL;
int zero = 0;
unsigned char var_19 = (unsigned char)225;
short var_20 = (short)-531;
unsigned long long int var_21 = 14812032104050866405ULL;
unsigned short var_22 = (unsigned short)52892;
unsigned long long int var_23 = 11514513925600003686ULL;
int var_24 = 1010422334;
unsigned char arr_1 [24] [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -525044121;
}

void checksum() {
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

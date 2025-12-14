#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)52;
unsigned long long int var_7 = 13914953708590560101ULL;
short var_10 = (short)26537;
unsigned short var_13 = (unsigned short)57917;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-3;
short var_19 = (short)-28752;
unsigned long long int var_20 = 4698221229900659254ULL;
unsigned int var_21 = 750341342U;
int var_22 = -347240313;
int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_2 [25] ;
unsigned short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -740274142 : -1619099777;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1639157979423387582ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 17380373831135970039ULL : 16318073872478573085ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37857 : (unsigned short)22670;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

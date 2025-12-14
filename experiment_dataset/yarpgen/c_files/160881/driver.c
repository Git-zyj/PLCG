#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned char var_8 = (unsigned char)219;
int var_10 = 1830937191;
signed char var_16 = (signed char)-79;
int zero = 0;
long long int var_19 = 2982236470017740049LL;
unsigned short var_20 = (unsigned short)15536;
unsigned int var_21 = 1149244781U;
unsigned short var_22 = (unsigned short)35985;
unsigned long long int var_23 = 15353131764849427850ULL;
int arr_0 [18] [18] ;
int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -1285571291;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -622900777;
}

void checksum() {
    hash(&seed, var_19);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
signed char var_3 = (signed char)26;
short var_6 = (short)-2268;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)240;
int zero = 0;
unsigned long long int var_13 = 10313652565159687783ULL;
unsigned long long int var_14 = 311171032712924876ULL;
short var_15 = (short)-7241;
signed char var_16 = (signed char)57;
long long int var_17 = 4993951625168333531LL;
unsigned int var_18 = 950152218U;
signed char arr_2 [25] ;
signed char arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-44;
}

void checksum() {
    hash(&seed, var_13);
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

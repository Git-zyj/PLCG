#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3502583883147838975ULL;
short var_3 = (short)19366;
unsigned int var_5 = 3529559987U;
long long int var_8 = 3024332681092246847LL;
unsigned int var_9 = 3176768426U;
unsigned long long int var_10 = 424825512385186535ULL;
unsigned int var_11 = 556509595U;
long long int var_13 = 3033716677303022602LL;
int zero = 0;
unsigned long long int var_15 = 1509004719583826993ULL;
unsigned long long int var_16 = 2990335896331458807ULL;
short var_17 = (short)-4003;
short var_18 = (short)3846;
unsigned int var_19 = 4001982612U;
short var_20 = (short)-15645;
unsigned int var_21 = 1825667976U;
unsigned char arr_2 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)33;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

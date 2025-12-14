#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
short var_3 = (short)32631;
short var_4 = (short)-12170;
unsigned int var_8 = 1916474359U;
unsigned int var_9 = 1072454612U;
unsigned char var_10 = (unsigned char)150;
int zero = 0;
signed char var_13 = (signed char)-58;
int var_14 = 272269916;
_Bool var_15 = (_Bool)1;
short var_16 = (short)5843;
_Bool var_17 = (_Bool)0;
_Bool arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

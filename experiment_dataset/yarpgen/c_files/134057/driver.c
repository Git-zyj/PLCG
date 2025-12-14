#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
unsigned char var_3 = (unsigned char)133;
unsigned short var_6 = (unsigned short)10439;
long long int var_7 = -3939621950516057058LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)124;
unsigned char var_11 = (unsigned char)0;
int zero = 0;
unsigned char var_13 = (unsigned char)235;
unsigned char var_14 = (unsigned char)156;
unsigned short var_15 = (unsigned short)63856;
signed char var_16 = (signed char)25;
signed char arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)20;
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

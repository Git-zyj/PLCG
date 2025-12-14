#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
unsigned long long int var_2 = 16599021646815499021ULL;
unsigned long long int var_3 = 9304816325415322743ULL;
unsigned int var_4 = 1447290949U;
unsigned int var_5 = 1498615310U;
unsigned int var_9 = 2177375824U;
int zero = 0;
signed char var_10 = (signed char)42;
short var_11 = (short)23030;
short var_12 = (short)11234;
unsigned short var_13 = (unsigned short)52429;
unsigned char arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)199 : (unsigned char)181;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

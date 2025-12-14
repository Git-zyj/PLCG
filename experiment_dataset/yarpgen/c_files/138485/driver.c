#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6768714241546451429ULL;
signed char var_5 = (signed char)-9;
short var_6 = (short)-28981;
unsigned short var_9 = (unsigned short)32194;
unsigned short var_14 = (unsigned short)52463;
unsigned char var_16 = (unsigned char)96;
unsigned int var_18 = 3461967054U;
int zero = 0;
signed char var_19 = (signed char)44;
unsigned int var_20 = 2357228901U;
short var_21 = (short)-4666;
signed char var_22 = (signed char)-112;
_Bool arr_1 [22] ;
signed char arr_2 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)104;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

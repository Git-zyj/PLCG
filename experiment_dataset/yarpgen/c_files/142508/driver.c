#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7371843434394095197LL;
unsigned short var_1 = (unsigned short)31039;
int var_3 = 1220772193;
signed char var_9 = (signed char)78;
_Bool var_11 = (_Bool)1;
unsigned short var_16 = (unsigned short)45029;
unsigned short var_17 = (unsigned short)34962;
int zero = 0;
signed char var_18 = (signed char)102;
int var_19 = -463610191;
unsigned int var_20 = 3272781161U;
unsigned char var_21 = (unsigned char)181;
signed char var_22 = (signed char)-13;
unsigned int arr_3 [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2668355538U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 6304781689397892536ULL;
}

void checksum() {
    hash(&seed, var_18);
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

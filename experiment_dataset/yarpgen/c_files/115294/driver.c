#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19163;
short var_2 = (short)-28906;
unsigned long long int var_4 = 16281205627987735027ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 7486135585804107952ULL;
unsigned int var_7 = 3920961409U;
unsigned short var_8 = (unsigned short)54640;
int var_9 = 2010791693;
int zero = 0;
long long int var_10 = 4564753645841907261LL;
short var_11 = (short)13410;
long long int var_12 = -4052519052967250622LL;
short var_13 = (short)-200;
unsigned long long int var_14 = 15666521009481420021ULL;
unsigned short arr_3 [10] [10] ;
short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)10138;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)17385;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

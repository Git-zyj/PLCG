#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1381120749U;
long long int var_4 = 325924288080970725LL;
long long int var_6 = 1527420435782462528LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-19801;
unsigned long long int var_10 = 4442021631433587651ULL;
unsigned long long int var_11 = 4081056844670978458ULL;
int zero = 0;
short var_12 = (short)27335;
short var_13 = (short)4373;
_Bool var_14 = (_Bool)1;
unsigned char arr_1 [19] ;
signed char arr_2 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-119;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

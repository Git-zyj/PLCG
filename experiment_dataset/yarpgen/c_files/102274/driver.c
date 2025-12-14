#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
long long int var_1 = 5063773030850260692LL;
long long int var_3 = -8799417870453279952LL;
unsigned long long int var_4 = 2868823067977430216ULL;
unsigned int var_5 = 2638658558U;
short var_6 = (short)-25202;
unsigned int var_8 = 702588160U;
int zero = 0;
unsigned long long int var_10 = 7670679721216723394ULL;
short var_11 = (short)5971;
unsigned int var_12 = 1521008082U;
unsigned char var_13 = (unsigned char)163;
signed char arr_2 [14] ;
signed char arr_5 [14] [14] [14] ;
unsigned int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 2497703143U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

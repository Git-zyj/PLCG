#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29368;
short var_1 = (short)17974;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)46;
unsigned short var_5 = (unsigned short)43497;
unsigned long long int var_6 = 5073872353835041179ULL;
unsigned short var_7 = (unsigned short)58808;
int var_8 = 1270003503;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)33651;
int zero = 0;
unsigned short var_11 = (unsigned short)51662;
signed char var_12 = (signed char)-9;
long long int var_13 = -4686508890215837888LL;
int var_14 = -809312132;
int var_15 = -1412922380;
unsigned int var_16 = 1212959604U;
signed char var_17 = (signed char)-54;
unsigned int arr_1 [10] [10] ;
unsigned short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1771390462U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)8584;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

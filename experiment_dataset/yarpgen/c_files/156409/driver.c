#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)25039;
unsigned long long int var_2 = 16536305583453902593ULL;
signed char var_3 = (signed char)6;
unsigned long long int var_5 = 1582909549750321251ULL;
signed char var_8 = (signed char)-81;
int var_9 = 1607282677;
int var_11 = -1373950266;
unsigned char var_12 = (unsigned char)67;
unsigned char var_13 = (unsigned char)85;
int zero = 0;
unsigned long long int var_18 = 15670929498863330008ULL;
unsigned int var_19 = 2562329049U;
signed char var_20 = (signed char)39;
signed char var_21 = (signed char)123;
unsigned int var_22 = 1676543781U;
unsigned int var_23 = 2886691733U;
long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -7498961629490256874LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

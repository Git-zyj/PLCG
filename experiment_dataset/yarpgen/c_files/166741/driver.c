#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2428935824697780112LL;
unsigned short var_6 = (unsigned short)38565;
unsigned short var_11 = (unsigned short)54408;
int var_16 = -1353449591;
long long int var_19 = -2643348954441487772LL;
int zero = 0;
signed char var_20 = (signed char)-113;
short var_21 = (short)80;
unsigned short var_22 = (unsigned short)23030;
unsigned long long int var_23 = 5994449711213723710ULL;
unsigned short var_24 = (unsigned short)55107;
signed char var_25 = (signed char)8;
int arr_0 [22] [22] ;
int arr_1 [22] [22] ;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1605350767;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 157533976;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 8545280879994967209LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20507;
unsigned char var_1 = (unsigned char)57;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)22;
signed char var_6 = (signed char)-51;
long long int var_7 = 6810970314071236048LL;
long long int var_9 = 4370405797393141102LL;
unsigned int var_10 = 1667008221U;
int zero = 0;
short var_12 = (short)-5234;
int var_13 = -912846594;
short arr_2 [21] ;
int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)19513;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -464429049;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

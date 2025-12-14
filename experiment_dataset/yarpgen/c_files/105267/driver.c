#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2856863972800971906ULL;
unsigned long long int var_4 = 4104940342389349555ULL;
signed char var_7 = (signed char)-49;
int zero = 0;
unsigned short var_16 = (unsigned short)14295;
unsigned long long int var_17 = 3123106690739204319ULL;
unsigned char var_18 = (unsigned char)213;
signed char arr_0 [13] ;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2516435651273066281LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

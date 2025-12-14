#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3616851230133099221LL;
signed char var_2 = (signed char)15;
unsigned char var_3 = (unsigned char)212;
signed char var_4 = (signed char)46;
unsigned short var_5 = (unsigned short)2279;
short var_6 = (short)-28478;
short var_8 = (short)-25800;
unsigned int var_11 = 1824730606U;
int zero = 0;
unsigned long long int var_13 = 7949481771188027514ULL;
unsigned char var_14 = (unsigned char)236;
long long int var_15 = 7911963948304439165LL;
unsigned int var_16 = 1522838150U;
long long int arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -1186798089876454545LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

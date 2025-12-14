#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9967025286496054923ULL;
signed char var_5 = (signed char)118;
unsigned short var_11 = (unsigned short)35113;
int zero = 0;
long long int var_15 = 6763068227575238467LL;
long long int var_16 = -4024964146973450866LL;
unsigned int var_17 = 3271434579U;
unsigned int var_18 = 3773673874U;
unsigned int var_19 = 1909174807U;
unsigned char var_20 = (unsigned char)48;
long long int arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 753107003513367701LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)37852;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

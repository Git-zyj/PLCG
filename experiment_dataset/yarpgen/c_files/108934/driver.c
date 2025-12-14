#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
signed char var_1 = (signed char)-24;
unsigned int var_5 = 4176402364U;
signed char var_8 = (signed char)54;
signed char var_9 = (signed char)62;
unsigned char var_11 = (unsigned char)78;
unsigned long long int var_12 = 14822110189935070940ULL;
unsigned long long int var_14 = 14442655040928519557ULL;
unsigned long long int var_15 = 15819067775575012142ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
unsigned int var_18 = 3578167262U;
int var_19 = 1518558303;
signed char var_20 = (signed char)-127;
unsigned long long int var_21 = 4113457770272088597ULL;
int arr_1 [14] ;
long long int arr_4 [14] ;
unsigned int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1872459173;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1046095749222962550LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1997882996U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

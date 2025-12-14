#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10362;
long long int var_1 = 3388337942012420365LL;
signed char var_2 = (signed char)-37;
unsigned int var_3 = 4146896942U;
int var_4 = 1907102381;
unsigned long long int var_5 = 80335348330424141ULL;
unsigned char var_6 = (unsigned char)207;
unsigned long long int var_7 = 9183217526487387937ULL;
long long int var_9 = 7369620612686105498LL;
unsigned long long int var_10 = 17918014935103280057ULL;
int zero = 0;
long long int var_11 = -5796666323237371204LL;
long long int var_12 = 6553891792942718022LL;
unsigned int var_13 = 539602700U;
unsigned long long int var_14 = 5390063066824696476ULL;
int var_15 = -1381590420;
unsigned int arr_0 [10] ;
signed char arr_1 [10] ;
int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 80187327U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1192479704;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

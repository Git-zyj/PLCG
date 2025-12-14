#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6172308917403022345LL;
long long int var_6 = -2880504068290348026LL;
long long int var_8 = 386958114835491836LL;
long long int var_9 = 1343887872687066568LL;
unsigned int var_10 = 3211397455U;
short var_12 = (short)-26059;
unsigned char var_14 = (unsigned char)108;
int zero = 0;
long long int var_19 = 2083020343693313514LL;
long long int var_20 = 7675567029783970562LL;
long long int var_21 = -5139895408069065546LL;
int var_22 = -799346484;
unsigned char var_23 = (unsigned char)71;
int arr_2 [25] [25] [25] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1530941451 : 2061429752;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1083879172430820993LL;
}

void checksum() {
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

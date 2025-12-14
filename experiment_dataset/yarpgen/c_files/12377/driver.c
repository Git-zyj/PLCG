#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
unsigned int var_2 = 1139395498U;
unsigned long long int var_8 = 12944881765297878670ULL;
unsigned char var_9 = (unsigned char)108;
long long int var_10 = -8930640634956677655LL;
int zero = 0;
short var_11 = (short)-14281;
unsigned short var_12 = (unsigned short)39354;
int var_13 = 340286817;
long long int var_14 = -3015629706145581477LL;
unsigned int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 4010974018U : 3369863944U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

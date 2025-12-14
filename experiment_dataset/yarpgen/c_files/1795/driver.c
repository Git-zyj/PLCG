#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)4;
int var_5 = -5960559;
int var_6 = 7236079;
unsigned char var_9 = (unsigned char)102;
unsigned char var_10 = (unsigned char)55;
signed char var_13 = (signed char)-92;
signed char var_15 = (signed char)-79;
int zero = 0;
int var_19 = -1088886289;
long long int var_20 = 8559349920820798527LL;
signed char var_21 = (signed char)-120;
int var_22 = 1335534712;
unsigned char var_23 = (unsigned char)117;
int var_24 = -674910434;
int var_25 = 1609402400;
int arr_2 [14] ;
signed char arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2069073918;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)42;
}

void checksum() {
    hash(&seed, var_19);
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

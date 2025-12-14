#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
int var_8 = 1419229030;
long long int var_9 = -8096470057787671742LL;
unsigned int var_10 = 2542666230U;
unsigned short var_11 = (unsigned short)36651;
unsigned long long int var_14 = 1788706133498162147ULL;
long long int var_18 = 2158840108645542938LL;
unsigned short var_19 = (unsigned short)62813;
int zero = 0;
short var_20 = (short)12314;
unsigned int var_21 = 2079930624U;
signed char var_22 = (signed char)77;
signed char var_23 = (signed char)25;
long long int var_24 = -2903721793820332777LL;
signed char var_25 = (signed char)5;
long long int arr_6 [17] ;
signed char arr_11 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2260282715778372074LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)-26;
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

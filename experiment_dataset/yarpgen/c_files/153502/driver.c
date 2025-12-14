#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5596605517442852656ULL;
unsigned char var_5 = (unsigned char)197;
signed char var_7 = (signed char)116;
int var_9 = 1070833599;
unsigned short var_11 = (unsigned short)60188;
long long int var_14 = -1592604300387247812LL;
unsigned char var_15 = (unsigned char)3;
int zero = 0;
signed char var_16 = (signed char)-54;
long long int var_17 = 1594129770518030583LL;
int var_18 = -655837488;
unsigned short var_19 = (unsigned short)13783;
int var_20 = -1912698733;
unsigned char var_21 = (unsigned char)168;
long long int var_22 = 3943244677278227062LL;
unsigned short var_23 = (unsigned short)15359;
long long int arr_0 [12] ;
int arr_2 [12] [12] ;
unsigned char arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4664070125555521053LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 970396131;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4426387563113872821ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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

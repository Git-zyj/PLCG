#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4991810554260528887LL;
short var_4 = (short)15400;
unsigned long long int var_7 = 4834841328363950328ULL;
long long int var_9 = 4510044738894580221LL;
int zero = 0;
int var_11 = 830128742;
unsigned char var_12 = (unsigned char)76;
unsigned long long int var_13 = 16893272530988580328ULL;
unsigned long long int var_14 = 9405573111467437320ULL;
short var_15 = (short)-11033;
unsigned short arr_2 [22] [22] ;
int arr_3 [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)56963;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 151841794;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -1582423118;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

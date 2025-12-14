#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
signed char var_1 = (signed char)31;
unsigned int var_4 = 2056652936U;
unsigned int var_5 = 2965759238U;
unsigned long long int var_6 = 5274336432024690349ULL;
unsigned short var_9 = (unsigned short)58904;
short var_10 = (short)-5636;
long long int var_11 = 6465935573249516787LL;
unsigned int var_13 = 3058871137U;
unsigned long long int var_16 = 4673370906256827219ULL;
unsigned long long int var_17 = 16031619006370912576ULL;
int zero = 0;
unsigned long long int var_18 = 15124570701278399190ULL;
signed char var_19 = (signed char)-115;
signed char var_20 = (signed char)77;
long long int var_21 = 426421394536672519LL;
int var_22 = -1869718306;
unsigned int var_23 = 1686577052U;
unsigned long long int var_24 = 7875591448205309826ULL;
long long int var_25 = 5561744919112724651LL;
unsigned long long int var_26 = 10989457054958530817ULL;
short var_27 = (short)-4810;
signed char var_28 = (signed char)-79;
unsigned int var_29 = 1939156551U;
long long int var_30 = 3231762428730002282LL;
unsigned char var_31 = (unsigned char)15;
unsigned int arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned int arr_2 [21] ;
long long int arr_7 [24] ;
short arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2691251629U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1089776575U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 357464568U : 3664973474U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 9163177456021258507LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)15205 : (short)-20440;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

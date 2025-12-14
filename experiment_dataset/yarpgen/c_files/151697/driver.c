#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27035;
signed char var_4 = (signed char)126;
unsigned short var_7 = (unsigned short)10353;
short var_13 = (short)23699;
int zero = 0;
short var_19 = (short)-32676;
unsigned long long int var_20 = 11873274109058188349ULL;
short var_21 = (short)-29220;
unsigned long long int var_22 = 9561437436872826390ULL;
short var_23 = (short)16492;
unsigned char var_24 = (unsigned char)250;
signed char arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-32;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

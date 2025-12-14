#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8730624625257828053LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)35104;
unsigned long long int var_4 = 8429459969701645187ULL;
int zero = 0;
unsigned int var_10 = 3392124680U;
short var_11 = (short)-29657;
signed char var_12 = (signed char)-97;
unsigned int arr_0 [21] [21] ;
signed char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 2394837888U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)124;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

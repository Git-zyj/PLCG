#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-714;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-9694;
short var_3 = (short)-24263;
unsigned int var_4 = 1285045130U;
unsigned long long int var_5 = 1400372477586761256ULL;
long long int var_7 = 1042634022499002906LL;
long long int var_8 = -7462113571265388506LL;
int zero = 0;
unsigned short var_10 = (unsigned short)46170;
unsigned int var_11 = 510683300U;
unsigned short var_12 = (unsigned short)54565;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10322127971499822081ULL;
unsigned int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 731289557U : 1493214189U;
}

void checksum() {
    hash(&seed, var_10);
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

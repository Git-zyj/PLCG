#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8475461355430876946LL;
signed char var_1 = (signed char)-106;
signed char var_3 = (signed char)27;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)32;
unsigned char var_9 = (unsigned char)112;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-10330;
unsigned int var_14 = 979592954U;
unsigned long long int var_15 = 5595361249085322297ULL;
signed char var_16 = (signed char)-41;
unsigned long long int var_17 = 2832977260897384016ULL;
long long int arr_0 [22] ;
_Bool arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2706289147914794198LL : 5834082277718539953LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
int var_2 = -329714384;
signed char var_3 = (signed char)-77;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 3429375319U;
unsigned int var_9 = 4151259558U;
int zero = 0;
unsigned long long int var_16 = 13179170077970061446ULL;
unsigned char var_17 = (unsigned char)227;
int var_18 = -1695774139;
signed char var_19 = (signed char)-32;
short var_20 = (short)4263;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4589184063645302555ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

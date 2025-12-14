#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32752;
unsigned int var_1 = 1090714425U;
unsigned char var_2 = (unsigned char)87;
long long int var_3 = 3970113550093892571LL;
unsigned long long int var_5 = 17278811768849452656ULL;
int var_8 = 1243326633;
long long int var_9 = 8132463886668816969LL;
int zero = 0;
short var_10 = (short)-15458;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 545371814217784359ULL;
short var_13 = (short)17913;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)233;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

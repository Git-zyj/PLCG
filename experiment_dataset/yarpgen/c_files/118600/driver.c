#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45699;
unsigned long long int var_4 = 3679495844600925307ULL;
unsigned int var_9 = 1863451616U;
int zero = 0;
signed char var_11 = (signed char)-46;
long long int var_12 = 8222869566355479859LL;
unsigned long long int var_13 = 2818581174352456554ULL;
_Bool arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
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

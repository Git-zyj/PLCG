#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8496636229894784717ULL;
signed char var_7 = (signed char)58;
long long int var_8 = -2361186260938283650LL;
int zero = 0;
unsigned long long int var_10 = 3092556205302606209ULL;
unsigned int var_11 = 1811219654U;
unsigned short var_12 = (unsigned short)45217;
_Bool var_13 = (_Bool)1;
void init() {
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

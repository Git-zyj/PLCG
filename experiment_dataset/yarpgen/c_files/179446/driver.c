#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2511;
short var_3 = (short)-27654;
unsigned int var_5 = 2609129472U;
unsigned int var_8 = 827818273U;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)3;
unsigned short var_15 = (unsigned short)58630;
unsigned short var_16 = (unsigned short)17785;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_20 = 7536499149760604525LL;
int var_21 = 995465464;
unsigned long long int var_22 = 2018383545262402328ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

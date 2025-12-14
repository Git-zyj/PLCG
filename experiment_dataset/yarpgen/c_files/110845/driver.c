#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3467665751U;
short var_1 = (short)1788;
signed char var_3 = (signed char)94;
unsigned char var_5 = (unsigned char)235;
long long int var_7 = 9195733719919825807LL;
unsigned char var_8 = (unsigned char)14;
long long int var_11 = 4764896950707489583LL;
int var_14 = 1951917373;
int zero = 0;
short var_15 = (short)-18487;
long long int var_16 = 5793878418346907513LL;
signed char var_17 = (signed char)-110;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

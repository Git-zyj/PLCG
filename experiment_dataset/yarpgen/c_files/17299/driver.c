#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13931671715597765563ULL;
short var_1 = (short)12365;
unsigned int var_2 = 2359543173U;
unsigned int var_3 = 91187117U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)11;
short var_15 = (short)-23426;
int zero = 0;
long long int var_19 = 8957343240691346072LL;
unsigned long long int var_20 = 4763481085390031427ULL;
long long int var_21 = -6412323815425355602LL;
unsigned char var_22 = (unsigned char)60;
int var_23 = 1400465853;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

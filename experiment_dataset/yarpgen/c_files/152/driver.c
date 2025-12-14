#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)8738;
signed char var_7 = (signed char)-28;
unsigned long long int var_8 = 6794395039909809394ULL;
long long int var_9 = -7126434613195829624LL;
long long int var_15 = 8525657324533860869LL;
int zero = 0;
int var_16 = -1599544016;
long long int var_17 = 3784061408414948014LL;
unsigned int var_18 = 59587596U;
void init() {
}

void checksum() {
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

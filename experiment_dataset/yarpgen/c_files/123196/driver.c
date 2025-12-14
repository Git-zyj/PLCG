#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5549372978675149183LL;
short var_1 = (short)28845;
unsigned char var_2 = (unsigned char)130;
int var_5 = 1916285003;
long long int var_8 = -6373386885290423820LL;
unsigned short var_9 = (unsigned short)14349;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)58;
short var_14 = (short)12733;
int var_15 = 46682671;
int zero = 0;
unsigned long long int var_16 = 12524484011227231900ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)4494;
short var_19 = (short)23493;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

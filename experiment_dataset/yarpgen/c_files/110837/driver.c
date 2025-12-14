#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2229207405U;
unsigned char var_1 = (unsigned char)229;
unsigned char var_4 = (unsigned char)221;
unsigned int var_6 = 3689272052U;
signed char var_7 = (signed char)91;
int var_9 = -2060396743;
signed char var_10 = (signed char)85;
long long int var_11 = -5245362884539476486LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)94;
signed char var_14 = (signed char)55;
short var_15 = (short)-16958;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

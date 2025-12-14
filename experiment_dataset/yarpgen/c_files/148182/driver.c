#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1220829175;
long long int var_1 = 4960689243739878275LL;
unsigned int var_5 = 915379374U;
signed char var_6 = (signed char)-29;
_Bool var_7 = (_Bool)1;
short var_9 = (short)11680;
unsigned int var_10 = 3221159257U;
int zero = 0;
short var_11 = (short)-12527;
unsigned char var_12 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

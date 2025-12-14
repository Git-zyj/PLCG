#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51226;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-1;
long long int var_3 = -4596707489249612558LL;
int var_5 = -550325042;
unsigned int var_7 = 3914616997U;
unsigned short var_12 = (unsigned short)37348;
signed char var_14 = (signed char)123;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)53831;
void init() {
}

void checksum() {
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

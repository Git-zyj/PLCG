#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)52;
unsigned int var_3 = 2646284824U;
int var_4 = 978731382;
_Bool var_5 = (_Bool)1;
int var_7 = 1482804131;
signed char var_9 = (signed char)-52;
int var_11 = -1206163407;
int var_12 = -927002625;
unsigned int var_13 = 731425800U;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
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

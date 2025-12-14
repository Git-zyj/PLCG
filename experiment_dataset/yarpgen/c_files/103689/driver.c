#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4184097803U;
signed char var_4 = (signed char)-54;
short var_5 = (short)-10848;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)54;
_Bool var_11 = (_Bool)1;
int var_12 = 664360877;
unsigned int var_13 = 4147385857U;
int zero = 0;
unsigned char var_14 = (unsigned char)118;
_Bool var_15 = (_Bool)1;
short var_16 = (short)2093;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3088493552U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

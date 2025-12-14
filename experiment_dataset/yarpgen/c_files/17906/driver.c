#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned short var_1 = (unsigned short)62747;
unsigned short var_2 = (unsigned short)57534;
int var_3 = -2089699737;
_Bool var_4 = (_Bool)1;
int var_7 = 68468540;
unsigned short var_9 = (unsigned short)1728;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)97;
short var_13 = (short)-3045;
unsigned char var_14 = (unsigned char)7;
short var_15 = (short)27644;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40596;
unsigned long long int var_2 = 9609998244791837000ULL;
unsigned int var_3 = 1510171171U;
unsigned int var_4 = 4186684553U;
unsigned short var_5 = (unsigned short)55055;
unsigned short var_8 = (unsigned short)44541;
unsigned char var_9 = (unsigned char)94;
unsigned int var_14 = 1126857516U;
unsigned int var_17 = 2282038476U;
int zero = 0;
unsigned int var_18 = 2055297027U;
unsigned int var_19 = 65149674U;
unsigned short var_20 = (unsigned short)30434;
unsigned short var_21 = (unsigned short)22565;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

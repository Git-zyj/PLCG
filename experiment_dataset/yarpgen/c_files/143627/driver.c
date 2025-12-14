#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)93;
unsigned int var_14 = 2460662794U;
unsigned short var_15 = (unsigned short)53177;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)32;
signed char var_19 = (signed char)-111;
signed char var_20 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

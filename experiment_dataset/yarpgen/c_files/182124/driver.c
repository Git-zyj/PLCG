#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-76;
signed char var_3 = (signed char)-63;
unsigned int var_4 = 1224280327U;
long long int var_5 = -4089408097131871055LL;
unsigned int var_7 = 495476800U;
unsigned char var_9 = (unsigned char)116;
short var_12 = (short)-32652;
unsigned char var_14 = (unsigned char)47;
int zero = 0;
signed char var_17 = (signed char)-75;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)61780;
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

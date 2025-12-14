#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)228;
int var_8 = -373227009;
unsigned int var_9 = 2670862596U;
unsigned char var_10 = (unsigned char)255;
unsigned char var_11 = (unsigned char)138;
int var_13 = -529150263;
int zero = 0;
unsigned char var_17 = (unsigned char)202;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-123;
unsigned short var_20 = (unsigned short)42534;
unsigned char var_21 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

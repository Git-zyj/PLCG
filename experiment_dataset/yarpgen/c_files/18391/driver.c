#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16348;
signed char var_1 = (signed char)-39;
unsigned char var_3 = (unsigned char)198;
_Bool var_5 = (_Bool)0;
int var_6 = -1522609017;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)162;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)11;
unsigned short var_18 = (unsigned short)55877;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
short var_1 = (short)19820;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)22366;
short var_5 = (short)-9733;
long long int var_6 = -874451159541468877LL;
int var_9 = 1857006432;
signed char var_12 = (signed char)98;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
signed char var_17 = (signed char)-24;
int var_18 = 1126473915;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

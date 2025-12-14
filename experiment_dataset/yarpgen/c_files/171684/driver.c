#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 230787142U;
short var_2 = (short)11893;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-121;
long long int var_9 = -3883142386486687631LL;
unsigned int var_10 = 1185884069U;
int var_11 = -157916170;
int zero = 0;
short var_17 = (short)-11265;
unsigned char var_18 = (unsigned char)92;
unsigned char var_19 = (unsigned char)205;
int var_20 = -917547828;
signed char var_21 = (signed char)82;
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

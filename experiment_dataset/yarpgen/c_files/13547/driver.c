#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33182;
int var_2 = 1291353588;
unsigned int var_4 = 173533483U;
unsigned int var_6 = 2011908228U;
long long int var_8 = -9147629976325637958LL;
unsigned short var_9 = (unsigned short)20572;
unsigned char var_13 = (unsigned char)60;
int zero = 0;
signed char var_14 = (signed char)-83;
unsigned int var_15 = 4218125409U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

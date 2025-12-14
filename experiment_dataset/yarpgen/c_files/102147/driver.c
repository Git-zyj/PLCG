#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned char var_2 = (unsigned char)65;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)127;
short var_5 = (short)-15562;
unsigned char var_8 = (unsigned char)16;
long long int var_9 = 5116936132549647919LL;
int zero = 0;
unsigned char var_16 = (unsigned char)105;
signed char var_17 = (signed char)20;
_Bool var_18 = (_Bool)0;
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

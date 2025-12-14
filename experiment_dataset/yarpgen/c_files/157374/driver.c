#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 12423679U;
unsigned char var_1 = (unsigned char)32;
unsigned char var_3 = (unsigned char)169;
unsigned char var_4 = (unsigned char)220;
unsigned char var_5 = (unsigned char)225;
long long int var_7 = 2344669807655675209LL;
unsigned short var_8 = (unsigned short)36607;
long long int var_9 = -7799091635757372691LL;
unsigned int var_11 = 1461051821U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)13425;
unsigned int var_15 = 2441456919U;
long long int var_16 = -9033877259860062428LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

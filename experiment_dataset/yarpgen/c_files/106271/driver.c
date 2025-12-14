#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15610;
int var_2 = -1653434672;
unsigned short var_4 = (unsigned short)39529;
unsigned char var_5 = (unsigned char)196;
unsigned int var_6 = 589252381U;
signed char var_7 = (signed char)97;
int var_9 = -1242224606;
int var_10 = -737126988;
unsigned int var_11 = 3209666487U;
short var_13 = (short)-26742;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)285;
void init() {
}

void checksum() {
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

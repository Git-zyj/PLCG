#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31743;
unsigned int var_4 = 3539724950U;
short var_6 = (short)-9807;
unsigned char var_7 = (unsigned char)121;
unsigned short var_8 = (unsigned short)60746;
unsigned short var_9 = (unsigned short)50767;
unsigned char var_12 = (unsigned char)138;
unsigned int var_15 = 539386661U;
int zero = 0;
unsigned short var_19 = (unsigned short)53886;
int var_20 = 1958093331;
void init() {
}

void checksum() {
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

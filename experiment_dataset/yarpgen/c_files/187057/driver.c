#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 891540432;
long long int var_3 = 7392082032914517065LL;
signed char var_7 = (signed char)91;
long long int var_9 = 4137993696560232688LL;
int var_11 = 1383984061;
unsigned short var_12 = (unsigned short)6781;
unsigned short var_13 = (unsigned short)44848;
short var_14 = (short)-3177;
int zero = 0;
int var_15 = -979222865;
unsigned char var_16 = (unsigned char)162;
unsigned short var_17 = (unsigned short)40802;
void init() {
}

void checksum() {
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

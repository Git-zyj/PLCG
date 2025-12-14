#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned char var_3 = (unsigned char)50;
short var_8 = (short)-30130;
unsigned char var_9 = (unsigned char)207;
unsigned char var_12 = (unsigned char)14;
signed char var_13 = (signed char)-43;
unsigned int var_14 = 1955180335U;
unsigned long long int var_15 = 3116184503103862471ULL;
int zero = 0;
signed char var_17 = (signed char)-100;
unsigned long long int var_18 = 11896789036917068123ULL;
unsigned char var_19 = (unsigned char)50;
unsigned long long int var_20 = 14797988118880920136ULL;
unsigned char var_21 = (unsigned char)34;
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

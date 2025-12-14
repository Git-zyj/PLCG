#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17290;
unsigned short var_3 = (unsigned short)43710;
unsigned short var_4 = (unsigned short)29662;
int var_5 = 903108887;
int var_6 = -670613279;
unsigned char var_7 = (unsigned char)154;
long long int var_9 = 6251690145681524025LL;
unsigned short var_10 = (unsigned short)42225;
short var_16 = (short)26441;
short var_19 = (short)6325;
int zero = 0;
long long int var_20 = 8659184595117196721LL;
int var_21 = 165566315;
unsigned int var_22 = 3960011513U;
signed char var_23 = (signed char)-127;
unsigned int var_24 = 2503928485U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3042;
int var_1 = -1376217035;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)27023;
long long int var_7 = 9176272472663600879LL;
unsigned char var_8 = (unsigned char)198;
unsigned short var_9 = (unsigned short)29318;
signed char var_10 = (signed char)-29;
long long int var_11 = -9154868640549864418LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)181;
unsigned char var_14 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

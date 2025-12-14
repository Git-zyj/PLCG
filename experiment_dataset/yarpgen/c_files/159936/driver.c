#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2333996120U;
unsigned char var_2 = (unsigned char)145;
unsigned short var_4 = (unsigned short)55387;
short var_7 = (short)31233;
signed char var_8 = (signed char)-40;
unsigned short var_9 = (unsigned short)42665;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1402708538U;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
long long int var_16 = 2525299316933711134LL;
void init() {
}

void checksum() {
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

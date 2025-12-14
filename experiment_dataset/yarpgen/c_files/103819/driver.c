#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3821;
short var_5 = (short)31691;
unsigned short var_8 = (unsigned short)53815;
unsigned char var_9 = (unsigned char)238;
unsigned int var_12 = 3496451637U;
unsigned char var_15 = (unsigned char)148;
unsigned int var_17 = 2668072600U;
int zero = 0;
long long int var_19 = 6814778476889465040LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)94;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned long long int var_1 = 3259756710795973294ULL;
short var_5 = (short)21716;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
unsigned short var_12 = (unsigned short)7788;
int var_13 = 1382389238;
unsigned short var_14 = (unsigned short)15304;
long long int var_15 = -2179772205348538454LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

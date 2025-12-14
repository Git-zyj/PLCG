#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22734;
unsigned int var_2 = 3579825705U;
long long int var_3 = -7049335614797367631LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
unsigned long long int var_15 = 9664670527366629520ULL;
int var_16 = -948034401;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

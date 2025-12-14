#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3331150039U;
unsigned short var_2 = (unsigned short)4905;
unsigned short var_9 = (unsigned short)3918;
unsigned short var_10 = (unsigned short)57255;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -113724963428088232LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

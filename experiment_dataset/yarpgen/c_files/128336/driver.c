#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned char var_1 = (unsigned char)8;
unsigned char var_2 = (unsigned char)50;
unsigned char var_3 = (unsigned char)121;
unsigned char var_5 = (unsigned char)23;
unsigned int var_7 = 3414079386U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 760506100;
short var_11 = (short)-18672;
short var_12 = (short)-1922;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

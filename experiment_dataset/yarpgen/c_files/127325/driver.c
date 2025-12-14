#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
unsigned long long int var_1 = 1018712920446037890ULL;
unsigned short var_3 = (unsigned short)50868;
signed char var_7 = (signed char)15;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)102;
unsigned short var_12 = (unsigned short)43410;
void init() {
}

void checksum() {
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

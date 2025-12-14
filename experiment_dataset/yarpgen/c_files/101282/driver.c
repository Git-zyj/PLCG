#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3819846129U;
signed char var_5 = (signed char)81;
signed char var_6 = (signed char)-125;
long long int var_8 = 3595086260229702054LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2795938116U;
unsigned int var_13 = 152707665U;
int zero = 0;
unsigned short var_14 = (unsigned short)12800;
unsigned char var_15 = (unsigned char)11;
unsigned int var_16 = 1895652302U;
long long int var_17 = -8783331203353572845LL;
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

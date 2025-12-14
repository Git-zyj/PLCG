#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1464705382;
long long int var_2 = -5624653619333573445LL;
unsigned char var_6 = (unsigned char)228;
long long int var_10 = 578134091695364164LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -1028231048;
signed char var_14 = (signed char)-43;
unsigned char var_15 = (unsigned char)130;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1986499608;
int var_5 = -105910160;
unsigned char var_7 = (unsigned char)18;
unsigned long long int var_9 = 10662660156856736870ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)95;
_Bool var_14 = (_Bool)1;
long long int var_16 = 45947345953087904LL;
int zero = 0;
int var_17 = 1042824635;
int var_18 = -30877128;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

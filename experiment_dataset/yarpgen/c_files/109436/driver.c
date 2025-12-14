#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 573221570U;
signed char var_1 = (signed char)67;
int var_5 = -825533880;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)92;
unsigned char var_10 = (unsigned char)114;
int zero = 0;
long long int var_13 = 7809168388122553353LL;
unsigned char var_14 = (unsigned char)192;
unsigned long long int var_15 = 5946131635841090919ULL;
unsigned int var_16 = 4283582059U;
unsigned int var_17 = 103447838U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

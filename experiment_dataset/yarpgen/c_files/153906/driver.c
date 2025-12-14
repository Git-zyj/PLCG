#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6892870164452711093LL;
unsigned int var_5 = 2400651419U;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 3196363869U;
int var_11 = -1363296203;
int var_15 = 1883285971;
int zero = 0;
long long int var_16 = 5972099591349299943LL;
signed char var_17 = (signed char)37;
unsigned char var_18 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

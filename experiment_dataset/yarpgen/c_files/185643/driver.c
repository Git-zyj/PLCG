#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3566031305U;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 3949812983U;
int zero = 0;
unsigned int var_12 = 2399246957U;
unsigned char var_13 = (unsigned char)252;
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

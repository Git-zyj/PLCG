#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned long long int var_1 = 17839913394070815761ULL;
unsigned int var_4 = 1696850780U;
unsigned int var_5 = 3394866461U;
unsigned char var_9 = (unsigned char)89;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3358756733U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

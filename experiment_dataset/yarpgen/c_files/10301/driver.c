#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1016968123;
unsigned char var_7 = (unsigned char)123;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)57;
int zero = 0;
unsigned long long int var_10 = 6580192122371996121ULL;
long long int var_11 = 6077917145779882361LL;
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

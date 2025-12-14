#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = -795109149;
unsigned long long int var_9 = 5805160697144972071ULL;
int zero = 0;
unsigned long long int var_10 = 5983140228251555620ULL;
unsigned char var_11 = (unsigned char)141;
unsigned char var_12 = (unsigned char)111;
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

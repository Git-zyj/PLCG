#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45742;
unsigned char var_8 = (unsigned char)50;
unsigned long long int var_10 = 5237641015574821822ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)45717;
unsigned long long int var_21 = 15556783742613060020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

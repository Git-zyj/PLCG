#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)2;
unsigned short var_9 = (unsigned short)21515;
unsigned char var_16 = (unsigned char)208;
int zero = 0;
unsigned int var_19 = 2191887678U;
int var_20 = 530411578;
unsigned int var_21 = 322718409U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

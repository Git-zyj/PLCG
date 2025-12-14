#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
unsigned char var_8 = (unsigned char)233;
unsigned short var_9 = (unsigned short)35818;
unsigned char var_17 = (unsigned char)216;
int zero = 0;
unsigned short var_18 = (unsigned short)5367;
unsigned int var_19 = 473962326U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

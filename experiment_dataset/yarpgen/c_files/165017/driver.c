#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1623230481U;
unsigned char var_4 = (unsigned char)207;
unsigned short var_8 = (unsigned short)31588;
int zero = 0;
unsigned int var_17 = 2834648300U;
unsigned short var_18 = (unsigned short)58540;
unsigned char var_19 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

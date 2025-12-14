#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6940651173602330270ULL;
unsigned short var_8 = (unsigned short)29583;
unsigned short var_9 = (unsigned short)12572;
unsigned char var_11 = (unsigned char)41;
int zero = 0;
unsigned char var_12 = (unsigned char)23;
unsigned long long int var_13 = 17780105860783924734ULL;
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

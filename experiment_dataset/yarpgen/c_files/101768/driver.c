#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21813;
unsigned char var_8 = (unsigned char)195;
short var_9 = (short)20458;
int zero = 0;
unsigned long long int var_13 = 13737357315522437319ULL;
unsigned char var_14 = (unsigned char)255;
short var_15 = (short)-21516;
unsigned long long int var_16 = 562795021464251918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

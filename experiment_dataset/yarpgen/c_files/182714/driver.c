#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39251;
unsigned short var_8 = (unsigned short)9507;
unsigned short var_9 = (unsigned short)56502;
unsigned short var_10 = (unsigned short)41792;
int zero = 0;
int var_13 = -759182788;
unsigned char var_14 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

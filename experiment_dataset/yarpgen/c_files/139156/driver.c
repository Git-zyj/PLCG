#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -829306656;
unsigned short var_4 = (unsigned short)29941;
unsigned char var_9 = (unsigned char)196;
short var_14 = (short)25114;
int zero = 0;
int var_16 = 798690244;
unsigned long long int var_17 = 13362177286647370476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

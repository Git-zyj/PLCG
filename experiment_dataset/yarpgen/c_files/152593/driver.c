#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19261;
int var_8 = -338763792;
short var_11 = (short)-9307;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)145;
unsigned long long int var_21 = 9799851765505290536ULL;
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

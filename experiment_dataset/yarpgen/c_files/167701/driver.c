#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61042;
int var_4 = -336869320;
unsigned char var_5 = (unsigned char)71;
unsigned int var_9 = 4090183442U;
unsigned char var_11 = (unsigned char)56;
unsigned long long int var_12 = 10857708005329341327ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-17418;
void init() {
}

void checksum() {
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

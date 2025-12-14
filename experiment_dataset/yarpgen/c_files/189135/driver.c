#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 213226791U;
unsigned char var_1 = (unsigned char)89;
unsigned int var_5 = 3411345261U;
int var_9 = -863984636;
long long int var_10 = 9165431357822191772LL;
int zero = 0;
long long int var_13 = 7507720834251656027LL;
unsigned int var_14 = 1184173984U;
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

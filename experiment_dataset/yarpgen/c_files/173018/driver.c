#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39455;
short var_11 = (short)18848;
unsigned long long int var_19 = 3840373298592169933ULL;
int zero = 0;
long long int var_20 = 5904563598441495562LL;
long long int var_21 = 6440962811919280332LL;
signed char var_22 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

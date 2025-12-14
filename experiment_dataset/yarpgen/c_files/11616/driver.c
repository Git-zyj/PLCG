#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4476832769063854021LL;
unsigned short var_4 = (unsigned short)49740;
unsigned char var_5 = (unsigned char)178;
short var_6 = (short)6184;
unsigned long long int var_9 = 10085563503514159870ULL;
unsigned int var_10 = 3255705265U;
int zero = 0;
short var_14 = (short)-30431;
unsigned long long int var_15 = 2566471928584121134ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

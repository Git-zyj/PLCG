#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 360182424;
int var_2 = 488640919;
int var_7 = -1122329678;
short var_9 = (short)-25441;
int zero = 0;
unsigned char var_16 = (unsigned char)80;
int var_17 = -608310003;
unsigned char var_18 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

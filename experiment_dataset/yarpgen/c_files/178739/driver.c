#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2572782189U;
unsigned char var_11 = (unsigned char)163;
unsigned short var_15 = (unsigned short)51331;
int zero = 0;
unsigned int var_16 = 2163631984U;
signed char var_17 = (signed char)-39;
long long int var_18 = -3358064403167341326LL;
unsigned char var_19 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

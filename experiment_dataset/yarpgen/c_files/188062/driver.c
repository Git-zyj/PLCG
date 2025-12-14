#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8607278028878026215LL;
long long int var_6 = 8323260768277035806LL;
short var_8 = (short)-1509;
unsigned char var_9 = (unsigned char)241;
unsigned int var_10 = 259734527U;
int zero = 0;
unsigned char var_12 = (unsigned char)159;
long long int var_13 = -4059496513524082776LL;
short var_14 = (short)-26774;
short var_15 = (short)-8095;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

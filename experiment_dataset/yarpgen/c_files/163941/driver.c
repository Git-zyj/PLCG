#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31495;
signed char var_5 = (signed char)116;
unsigned long long int var_6 = 11801940207341321153ULL;
unsigned char var_8 = (unsigned char)186;
unsigned char var_9 = (unsigned char)58;
unsigned long long int var_10 = 6867199080111678673ULL;
int zero = 0;
signed char var_11 = (signed char)-91;
unsigned long long int var_12 = 14209244114456849708ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

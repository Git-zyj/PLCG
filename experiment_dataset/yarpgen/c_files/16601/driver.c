#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 630025952;
signed char var_11 = (signed char)-100;
unsigned int var_17 = 833904214U;
int zero = 0;
int var_19 = 673760624;
unsigned char var_20 = (unsigned char)32;
long long int var_21 = 6982577545459117967LL;
unsigned int var_22 = 1623962617U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

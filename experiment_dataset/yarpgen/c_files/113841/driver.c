#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13940902343839912121ULL;
unsigned long long int var_8 = 10395031149000989514ULL;
unsigned char var_11 = (unsigned char)175;
unsigned long long int var_12 = 8385085162266167781ULL;
int zero = 0;
unsigned long long int var_17 = 14080530035396490716ULL;
long long int var_18 = 2942838837978945650LL;
long long int var_19 = -4970562100304640270LL;
void init() {
}

void checksum() {
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

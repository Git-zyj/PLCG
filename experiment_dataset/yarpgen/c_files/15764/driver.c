#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-17995;
unsigned long long int var_9 = 10436302138532013464ULL;
unsigned char var_13 = (unsigned char)149;
signed char var_17 = (signed char)84;
short var_18 = (short)-10819;
int zero = 0;
unsigned long long int var_19 = 3346811838753971100ULL;
unsigned char var_20 = (unsigned char)1;
short var_21 = (short)22987;
signed char var_22 = (signed char)85;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2082029179;
long long int var_3 = 3699497139799543090LL;
unsigned short var_6 = (unsigned short)27181;
long long int var_7 = -4572431407430424590LL;
int var_8 = 1425983791;
short var_9 = (short)4533;
unsigned short var_12 = (unsigned short)47742;
unsigned short var_13 = (unsigned short)35297;
unsigned short var_17 = (unsigned short)41562;
int zero = 0;
short var_19 = (short)-28727;
signed char var_20 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

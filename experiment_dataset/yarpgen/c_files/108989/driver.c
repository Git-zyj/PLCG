#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -923483022;
unsigned long long int var_4 = 13003915263101852013ULL;
unsigned long long int var_6 = 17917666151265439560ULL;
unsigned int var_7 = 4126497006U;
int var_9 = -297682880;
signed char var_10 = (signed char)-34;
unsigned char var_15 = (unsigned char)5;
int zero = 0;
short var_18 = (short)-22044;
signed char var_19 = (signed char)-127;
void init() {
}

void checksum() {
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

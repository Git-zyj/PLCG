#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1072088469;
unsigned char var_7 = (unsigned char)146;
short var_8 = (short)-5201;
unsigned int var_9 = 1105492336U;
unsigned short var_10 = (unsigned short)5772;
short var_11 = (short)-10828;
unsigned int var_13 = 2520925221U;
int zero = 0;
unsigned long long int var_15 = 15795846561495588001ULL;
signed char var_16 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

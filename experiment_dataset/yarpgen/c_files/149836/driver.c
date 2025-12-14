#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)78;
int var_2 = 1932957676;
unsigned long long int var_5 = 3374967916583969699ULL;
unsigned char var_7 = (unsigned char)118;
unsigned int var_9 = 155491115U;
int var_12 = -916596988;
unsigned int var_13 = 2776370943U;
unsigned long long int var_14 = 2855984170503179298ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)87;
short var_17 = (short)-10222;
unsigned char var_18 = (unsigned char)227;
int var_19 = -687311501;
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

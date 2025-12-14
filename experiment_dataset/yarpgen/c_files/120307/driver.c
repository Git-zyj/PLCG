#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10905;
unsigned int var_9 = 2588028312U;
unsigned char var_12 = (unsigned char)172;
int zero = 0;
long long int var_16 = 2931413528809907348LL;
short var_17 = (short)-13565;
unsigned long long int var_18 = 7164750268502610693ULL;
unsigned long long int var_19 = 15353861800953904394ULL;
unsigned char var_20 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49788;
signed char var_1 = (signed char)109;
long long int var_3 = -2218960101798104001LL;
unsigned long long int var_5 = 10785406353401171548ULL;
unsigned long long int var_6 = 7420572611036673219ULL;
unsigned short var_8 = (unsigned short)15274;
int var_10 = 423481654;
long long int var_14 = 5284765382514517211LL;
unsigned int var_15 = 2621987144U;
int zero = 0;
signed char var_17 = (signed char)8;
unsigned char var_18 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

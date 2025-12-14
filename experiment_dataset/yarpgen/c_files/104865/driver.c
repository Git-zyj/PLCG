#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned int var_6 = 392171931U;
int var_7 = -2118366107;
unsigned long long int var_8 = 18280646869938929300ULL;
unsigned char var_9 = (unsigned char)239;
long long int var_10 = -4466167184759353131LL;
unsigned int var_11 = 3124964023U;
unsigned short var_12 = (unsigned short)2723;
unsigned long long int var_15 = 3462905104801358527ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)12068;
unsigned int var_21 = 3937102803U;
long long int var_22 = -1531719392112997501LL;
void init() {
}

void checksum() {
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

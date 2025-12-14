#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37059;
unsigned char var_5 = (unsigned char)17;
signed char var_6 = (signed char)23;
long long int var_7 = -8475289066807995670LL;
unsigned int var_9 = 2229018573U;
unsigned short var_11 = (unsigned short)8258;
unsigned int var_12 = 3039109321U;
signed char var_13 = (signed char)-25;
long long int var_14 = 69764388882058052LL;
unsigned int var_15 = 16887144U;
int zero = 0;
unsigned char var_17 = (unsigned char)7;
long long int var_18 = 5769922082403002744LL;
unsigned char var_19 = (unsigned char)156;
signed char var_20 = (signed char)34;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10589897264072131242ULL;
unsigned short var_3 = (unsigned short)28376;
short var_7 = (short)-28754;
unsigned char var_12 = (unsigned char)127;
int zero = 0;
long long int var_13 = 8170603839225909197LL;
unsigned short var_14 = (unsigned short)26003;
unsigned long long int var_15 = 757842156213243504ULL;
signed char var_16 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

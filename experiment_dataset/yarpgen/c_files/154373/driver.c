#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7063421427894915987ULL;
signed char var_5 = (signed char)106;
signed char var_8 = (signed char)-90;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)111;
signed char var_13 = (signed char)117;
int zero = 0;
unsigned char var_15 = (unsigned char)133;
unsigned short var_16 = (unsigned short)61355;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29453;
unsigned char var_3 = (unsigned char)255;
signed char var_4 = (signed char)-80;
long long int var_7 = -8262922252852173894LL;
signed char var_14 = (signed char)-56;
unsigned int var_17 = 2344003699U;
int zero = 0;
unsigned char var_20 = (unsigned char)16;
unsigned char var_21 = (unsigned char)207;
signed char var_22 = (signed char)-49;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -475715943;
signed char var_2 = (signed char)-15;
unsigned char var_3 = (unsigned char)78;
int var_4 = 901293486;
signed char var_5 = (signed char)123;
unsigned char var_7 = (unsigned char)237;
long long int var_8 = -7967332586000632511LL;
long long int var_9 = 9037185257409863214LL;
unsigned short var_10 = (unsigned short)44066;
long long int var_11 = -6226416131074397037LL;
unsigned short var_12 = (unsigned short)25751;
int zero = 0;
signed char var_13 = (signed char)69;
signed char var_14 = (signed char)74;
unsigned char var_15 = (unsigned char)77;
signed char var_16 = (signed char)-92;
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

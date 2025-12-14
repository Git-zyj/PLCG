#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18920;
int var_3 = -187471730;
unsigned int var_6 = 3135019899U;
long long int var_7 = -4553370630526773368LL;
unsigned short var_8 = (unsigned short)62241;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
long long int var_12 = 4722955393009008569LL;
short var_13 = (short)16591;
signed char var_14 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

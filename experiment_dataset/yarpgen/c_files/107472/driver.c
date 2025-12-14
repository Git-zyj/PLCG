#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6556;
short var_4 = (short)15533;
signed char var_5 = (signed char)-121;
unsigned int var_9 = 3176418815U;
int zero = 0;
unsigned int var_10 = 187845211U;
int var_11 = -1451723148;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17815;
long long int var_2 = 3994678587050393365LL;
short var_4 = (short)5315;
signed char var_5 = (signed char)101;
signed char var_8 = (signed char)-116;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)22;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
unsigned long long int var_16 = 7913122866967023108ULL;
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

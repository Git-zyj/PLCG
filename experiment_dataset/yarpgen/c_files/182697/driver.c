#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)27;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-27826;
long long int var_12 = 999660869174410886LL;
int zero = 0;
unsigned long long int var_13 = 6483099735160652761ULL;
unsigned char var_14 = (unsigned char)40;
signed char var_15 = (signed char)-51;
_Bool var_16 = (_Bool)0;
long long int var_17 = 9175561537667456645LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

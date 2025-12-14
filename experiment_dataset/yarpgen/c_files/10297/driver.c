#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52928;
unsigned int var_6 = 2457199397U;
unsigned int var_7 = 698212250U;
int var_8 = -1516602477;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2795628938U;
unsigned int var_13 = 2552724532U;
unsigned long long int var_14 = 112867304546837256ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

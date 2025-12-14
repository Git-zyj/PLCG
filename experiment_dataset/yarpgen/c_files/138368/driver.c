#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12289633701664749674ULL;
unsigned char var_1 = (unsigned char)231;
long long int var_3 = -5896187726721082064LL;
unsigned short var_8 = (unsigned short)759;
short var_9 = (short)7638;
int zero = 0;
int var_13 = -1616528184;
short var_14 = (short)-4861;
signed char var_15 = (signed char)67;
signed char var_16 = (signed char)-64;
long long int var_17 = -7462661804995580748LL;
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

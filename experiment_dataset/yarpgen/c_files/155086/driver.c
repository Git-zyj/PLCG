#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1396366597473434327LL;
short var_8 = (short)27259;
unsigned short var_10 = (unsigned short)50933;
unsigned short var_11 = (unsigned short)592;
long long int var_12 = -5851741872362263028LL;
unsigned char var_14 = (unsigned char)41;
long long int var_16 = -3561693395616961933LL;
int zero = 0;
unsigned long long int var_20 = 12172787671641679847ULL;
unsigned short var_21 = (unsigned short)970;
long long int var_22 = -6640064013181659370LL;
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

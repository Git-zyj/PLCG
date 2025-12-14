#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10395133617035270695ULL;
long long int var_5 = 1070524193332780234LL;
signed char var_9 = (signed char)-106;
unsigned long long int var_10 = 18445633442762993558ULL;
int zero = 0;
short var_13 = (short)21509;
short var_14 = (short)-15491;
unsigned char var_15 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

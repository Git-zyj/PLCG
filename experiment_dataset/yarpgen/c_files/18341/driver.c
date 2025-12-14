#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
long long int var_7 = -2566206154290391547LL;
unsigned long long int var_8 = 12236675623110222069ULL;
long long int var_9 = -2435930872946550666LL;
unsigned char var_11 = (unsigned char)97;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_17 = (short)-16614;
unsigned long long int var_18 = 9903073597092353639ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

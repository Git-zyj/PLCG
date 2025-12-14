#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)23;
long long int var_6 = 1342298064076625114LL;
unsigned int var_7 = 2804164938U;
int zero = 0;
int var_12 = 2129675195;
unsigned short var_13 = (unsigned short)51262;
long long int var_14 = 7193000315021704524LL;
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

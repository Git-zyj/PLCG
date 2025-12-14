#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-69;
_Bool var_6 = (_Bool)0;
long long int var_10 = 3125311483091206600LL;
signed char var_12 = (signed char)17;
int zero = 0;
unsigned short var_14 = (unsigned short)58260;
unsigned long long int var_15 = 4534212249169334399ULL;
void init() {
}

void checksum() {
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

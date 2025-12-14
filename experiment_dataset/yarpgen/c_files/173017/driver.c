#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-24;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)50;
unsigned short var_10 = (unsigned short)32493;
unsigned long long int var_11 = 17290232244858717281ULL;
int zero = 0;
signed char var_13 = (signed char)79;
unsigned short var_14 = (unsigned short)47471;
void init() {
}

void checksum() {
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

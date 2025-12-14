#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned short var_3 = (unsigned short)60417;
unsigned short var_4 = (unsigned short)53973;
unsigned long long int var_5 = 13220038874984121008ULL;
int var_7 = 1147656375;
int var_8 = 1157997761;
signed char var_10 = (signed char)82;
int zero = 0;
unsigned int var_13 = 3305986655U;
int var_14 = -1388649022;
unsigned int var_15 = 1470732677U;
short var_16 = (short)31863;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

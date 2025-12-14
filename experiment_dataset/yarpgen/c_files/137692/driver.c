#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8225869379170501515LL;
signed char var_1 = (signed char)29;
int var_4 = -1703136354;
unsigned short var_5 = (unsigned short)24269;
int var_6 = 674966344;
short var_7 = (short)25834;
unsigned short var_8 = (unsigned short)63430;
int zero = 0;
signed char var_17 = (signed char)-10;
int var_18 = 665098728;
unsigned short var_19 = (unsigned short)16649;
unsigned long long int var_20 = 4194034593335731636ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

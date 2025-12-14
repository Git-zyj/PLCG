#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1516065384;
long long int var_1 = 7451053513714381028LL;
unsigned char var_2 = (unsigned char)170;
unsigned long long int var_3 = 11044655819856250425ULL;
signed char var_6 = (signed char)-57;
short var_7 = (short)-21038;
short var_11 = (short)20951;
int zero = 0;
int var_12 = -1890493881;
int var_13 = -1577043898;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

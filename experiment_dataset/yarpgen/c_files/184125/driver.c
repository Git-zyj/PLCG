#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1404163643;
unsigned char var_1 = (unsigned char)114;
long long int var_11 = -4821386824890509249LL;
long long int var_12 = 3692230360882211684LL;
int zero = 0;
unsigned long long int var_18 = 15131529410790504262ULL;
short var_19 = (short)-7846;
unsigned long long int var_20 = 14491413254456300207ULL;
void init() {
}

void checksum() {
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

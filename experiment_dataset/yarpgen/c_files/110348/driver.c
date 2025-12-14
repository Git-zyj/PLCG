#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)117;
long long int var_7 = -4843944672489416980LL;
short var_12 = (short)5175;
unsigned long long int var_13 = 12055611464675649587ULL;
long long int var_14 = -7349289680215008105LL;
long long int var_15 = -2789277423209039208LL;
int zero = 0;
short var_17 = (short)10699;
short var_18 = (short)-5569;
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

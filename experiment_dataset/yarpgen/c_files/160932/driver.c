#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1003250385;
long long int var_8 = 7319133374288062931LL;
int zero = 0;
long long int var_16 = 3462521415457573632LL;
long long int var_17 = -3920130321940635364LL;
unsigned short var_18 = (unsigned short)33714;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7255502415409622509LL;
short var_5 = (short)-12647;
unsigned long long int var_6 = 3791708741694914001ULL;
unsigned char var_10 = (unsigned char)29;
int zero = 0;
long long int var_13 = -5858880367021045798LL;
signed char var_14 = (signed char)102;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned long long int var_2 = 12135406199160142852ULL;
int var_5 = -1591525475;
unsigned long long int var_7 = 14196937398444603728ULL;
int zero = 0;
short var_17 = (short)-21367;
int var_18 = -2077464791;
long long int var_19 = -8641232991588159896LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

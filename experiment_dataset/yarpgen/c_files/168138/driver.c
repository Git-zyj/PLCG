#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17358987662260358755ULL;
int var_2 = -874927893;
unsigned int var_6 = 755825454U;
int var_8 = 672152190;
int zero = 0;
unsigned long long int var_11 = 14355465032939242136ULL;
unsigned long long int var_12 = 7372050821228573105ULL;
short var_13 = (short)-29570;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

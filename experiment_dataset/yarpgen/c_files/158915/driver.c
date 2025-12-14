#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 646977612619257365ULL;
short var_8 = (short)-4510;
long long int var_12 = 5073813235821147629LL;
short var_14 = (short)6720;
int zero = 0;
unsigned long long int var_16 = 63836706217148789ULL;
int var_17 = 17760180;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

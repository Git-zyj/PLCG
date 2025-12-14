#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11613381527249976167ULL;
short var_2 = (short)-4543;
unsigned char var_7 = (unsigned char)192;
short var_10 = (short)-12248;
int zero = 0;
int var_17 = -1544569465;
_Bool var_18 = (_Bool)1;
int var_19 = -1172519114;
_Bool var_20 = (_Bool)1;
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

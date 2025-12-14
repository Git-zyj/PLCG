#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2973822647U;
long long int var_7 = 8800515418676205526LL;
int var_8 = 688050302;
unsigned int var_9 = 2808541162U;
short var_12 = (short)-13049;
signed char var_15 = (signed char)123;
int zero = 0;
signed char var_16 = (signed char)-77;
unsigned char var_17 = (unsigned char)177;
signed char var_18 = (signed char)-111;
short var_19 = (short)-23323;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

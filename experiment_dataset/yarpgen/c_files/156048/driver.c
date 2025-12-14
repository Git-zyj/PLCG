#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10834;
_Bool var_2 = (_Bool)1;
unsigned char var_11 = (unsigned char)213;
_Bool var_14 = (_Bool)1;
short var_15 = (short)30268;
unsigned short var_16 = (unsigned short)38652;
int zero = 0;
unsigned short var_20 = (unsigned short)25383;
short var_21 = (short)4127;
unsigned long long int var_22 = 17405337749421684616ULL;
short var_23 = (short)-4373;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

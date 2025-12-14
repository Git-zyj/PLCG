#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
short var_2 = (short)16920;
short var_3 = (short)469;
long long int var_5 = 4373889099117609149LL;
unsigned char var_7 = (unsigned char)74;
signed char var_9 = (signed char)-6;
unsigned long long int var_11 = 8547646711677225797ULL;
unsigned short var_13 = (unsigned short)32419;
int zero = 0;
unsigned char var_17 = (unsigned char)113;
int var_18 = -589757287;
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

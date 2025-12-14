#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12310;
short var_1 = (short)22177;
int var_2 = -1789940361;
int var_3 = -888127625;
short var_5 = (short)-30068;
short var_7 = (short)-15112;
int var_8 = 322206062;
int var_9 = 621277279;
int zero = 0;
int var_10 = 1574140698;
short var_11 = (short)-6224;
short var_12 = (short)23350;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

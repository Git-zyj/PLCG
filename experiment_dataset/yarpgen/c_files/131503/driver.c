#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13651786602490066461ULL;
unsigned long long int var_2 = 589602631582796080ULL;
unsigned short var_3 = (unsigned short)9555;
unsigned short var_10 = (unsigned short)43236;
int zero = 0;
short var_16 = (short)18691;
short var_17 = (short)-25370;
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

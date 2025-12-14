#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1187379126U;
long long int var_7 = -3514501228788102520LL;
unsigned long long int var_8 = 3109577540273549938ULL;
short var_9 = (short)-24073;
short var_12 = (short)-31455;
int zero = 0;
int var_18 = 1238146210;
int var_19 = -1899443823;
int var_20 = 1000219695;
void init() {
}

void checksum() {
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

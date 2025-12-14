#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33137;
unsigned int var_9 = 1806895848U;
int var_13 = -1867675161;
int zero = 0;
unsigned short var_17 = (unsigned short)44480;
long long int var_18 = 5881172760032434750LL;
unsigned int var_19 = 968974455U;
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

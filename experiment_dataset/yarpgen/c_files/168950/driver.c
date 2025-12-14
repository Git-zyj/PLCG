#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11142884288257810458ULL;
short var_5 = (short)3841;
unsigned short var_9 = (unsigned short)14253;
unsigned short var_11 = (unsigned short)22844;
int zero = 0;
int var_16 = -1288839670;
signed char var_17 = (signed char)-34;
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

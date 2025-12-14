#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10254427457237432485ULL;
unsigned short var_5 = (unsigned short)24486;
unsigned long long int var_8 = 8548987085565281954ULL;
unsigned short var_16 = (unsigned short)51905;
int zero = 0;
short var_17 = (short)-14039;
unsigned long long int var_18 = 13351577432553704997ULL;
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

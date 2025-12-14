#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1131892525;
unsigned long long int var_2 = 9448761699816143220ULL;
unsigned int var_11 = 810521973U;
signed char var_15 = (signed char)-86;
int zero = 0;
unsigned long long int var_16 = 10511986283049459860ULL;
int var_17 = -1371865823;
unsigned char var_18 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

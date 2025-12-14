#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-29704;
short var_8 = (short)-26017;
unsigned long long int var_9 = 8062415212318105757ULL;
unsigned long long int var_12 = 8093833500305686237ULL;
unsigned char var_13 = (unsigned char)137;
int zero = 0;
unsigned char var_14 = (unsigned char)9;
unsigned char var_15 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

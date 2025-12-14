#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1287421233060736736ULL;
unsigned char var_1 = (unsigned char)153;
unsigned char var_2 = (unsigned char)176;
unsigned long long int var_8 = 16087631224287166293ULL;
unsigned char var_12 = (unsigned char)72;
unsigned char var_14 = (unsigned char)72;
int zero = 0;
unsigned short var_18 = (unsigned short)49775;
unsigned long long int var_19 = 2058816393337836698ULL;
short var_20 = (short)17272;
short var_21 = (short)-10896;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23887;
signed char var_5 = (signed char)-19;
unsigned char var_6 = (unsigned char)49;
unsigned short var_11 = (unsigned short)35610;
signed char var_12 = (signed char)-106;
unsigned long long int var_13 = 7357216522754304410ULL;
int zero = 0;
short var_18 = (short)13085;
unsigned long long int var_19 = 14973369718668606643ULL;
unsigned long long int var_20 = 16194333036633866178ULL;
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

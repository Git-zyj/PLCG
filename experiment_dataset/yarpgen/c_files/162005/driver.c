#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45193;
int var_2 = 1759168643;
int var_3 = 1206387501;
unsigned long long int var_5 = 6051352803753983888ULL;
unsigned long long int var_11 = 958878841164358304ULL;
unsigned short var_16 = (unsigned short)32851;
int zero = 0;
unsigned char var_18 = (unsigned char)84;
unsigned char var_19 = (unsigned char)121;
unsigned long long int var_20 = 17289414715963354039ULL;
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

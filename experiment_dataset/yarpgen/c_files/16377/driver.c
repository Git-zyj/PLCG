#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)49554;
unsigned char var_10 = (unsigned char)117;
int zero = 0;
unsigned long long int var_19 = 12000376845514026913ULL;
unsigned int var_20 = 3220360765U;
signed char var_21 = (signed char)-121;
unsigned long long int var_22 = 6158218130170722169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

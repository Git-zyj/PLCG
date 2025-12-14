#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned int var_2 = 1275836432U;
unsigned short var_5 = (unsigned short)54404;
unsigned long long int var_7 = 13880466128196583024ULL;
signed char var_9 = (signed char)-4;
int zero = 0;
unsigned int var_11 = 3543708638U;
int var_12 = -549097753;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

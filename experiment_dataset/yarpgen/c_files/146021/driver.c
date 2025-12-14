#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)105;
unsigned int var_5 = 2273353838U;
signed char var_6 = (signed char)-121;
signed char var_9 = (signed char)-88;
short var_12 = (short)25963;
int zero = 0;
unsigned long long int var_19 = 7213409129812764254ULL;
short var_20 = (short)27931;
int var_21 = 1080099435;
void init() {
}

void checksum() {
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

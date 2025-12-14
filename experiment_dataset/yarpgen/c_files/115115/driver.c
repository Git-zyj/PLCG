#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26449;
unsigned char var_5 = (unsigned char)185;
unsigned long long int var_8 = 6681655900085536073ULL;
int zero = 0;
unsigned long long int var_11 = 8788997156723376706ULL;
unsigned int var_12 = 3749007573U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -67196858;
unsigned long long int var_7 = 11802473749188362028ULL;
long long int var_8 = 188189988816222557LL;
unsigned int var_9 = 3436125668U;
short var_10 = (short)164;
unsigned int var_11 = 179384832U;
int zero = 0;
short var_12 = (short)6405;
unsigned short var_13 = (unsigned short)1124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

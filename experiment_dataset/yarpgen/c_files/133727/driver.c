#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12246389798346694857ULL;
unsigned short var_4 = (unsigned short)14234;
unsigned char var_8 = (unsigned char)238;
short var_9 = (short)11581;
int zero = 0;
unsigned long long int var_14 = 15333727596280528233ULL;
long long int var_15 = -3032135863932650169LL;
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

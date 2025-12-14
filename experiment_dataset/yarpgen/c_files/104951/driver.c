#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14943543931600037108ULL;
unsigned long long int var_6 = 2416015924475657741ULL;
int var_11 = 1999147272;
unsigned int var_12 = 1792447822U;
unsigned int var_16 = 42370859U;
int zero = 0;
unsigned int var_20 = 4014676678U;
long long int var_21 = -486805378256333359LL;
unsigned short var_22 = (unsigned short)23520;
void init() {
}

void checksum() {
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

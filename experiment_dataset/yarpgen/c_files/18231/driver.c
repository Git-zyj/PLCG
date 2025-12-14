#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2221667514U;
unsigned int var_3 = 3868211149U;
unsigned char var_4 = (unsigned char)71;
long long int var_6 = 5365890368519763014LL;
unsigned int var_8 = 2103109935U;
unsigned long long int var_14 = 8567873173297385986ULL;
long long int var_15 = 2924255198490996731LL;
int zero = 0;
int var_19 = -619413143;
unsigned char var_20 = (unsigned char)193;
short var_21 = (short)29081;
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

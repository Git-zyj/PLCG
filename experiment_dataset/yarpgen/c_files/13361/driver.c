#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8483160494082004330ULL;
short var_6 = (short)4432;
signed char var_9 = (signed char)103;
long long int var_11 = 1703341134285241305LL;
int zero = 0;
unsigned int var_19 = 2400180755U;
short var_20 = (short)18508;
unsigned long long int var_21 = 10608488158071001651ULL;
unsigned char var_22 = (unsigned char)21;
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

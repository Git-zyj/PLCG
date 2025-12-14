#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12663977203041785492ULL;
long long int var_5 = 2733572250140813674LL;
unsigned long long int var_7 = 5738853997019475546ULL;
unsigned char var_9 = (unsigned char)21;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
unsigned char var_12 = (unsigned char)55;
unsigned char var_13 = (unsigned char)46;
unsigned char var_14 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

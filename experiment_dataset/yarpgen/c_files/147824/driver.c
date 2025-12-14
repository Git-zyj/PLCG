#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8539889731887228993ULL;
long long int var_1 = 7355655015466224826LL;
unsigned char var_6 = (unsigned char)55;
unsigned int var_9 = 3189623014U;
int var_12 = -2058433103;
int var_14 = 1153762981;
int zero = 0;
unsigned int var_17 = 4195466705U;
unsigned short var_18 = (unsigned short)58238;
unsigned char var_19 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

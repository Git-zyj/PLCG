#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3994813994U;
unsigned char var_10 = (unsigned char)163;
int zero = 0;
unsigned short var_13 = (unsigned short)28074;
unsigned long long int var_14 = 10157536586168971148ULL;
long long int var_15 = -2377661876457167943LL;
unsigned short var_16 = (unsigned short)26578;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

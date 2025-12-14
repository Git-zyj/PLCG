#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17070045121144540512ULL;
unsigned char var_2 = (unsigned char)103;
unsigned short var_4 = (unsigned short)26382;
unsigned int var_5 = 2383123737U;
signed char var_7 = (signed char)-72;
long long int var_9 = 3858631675220451567LL;
int zero = 0;
int var_11 = 1176499823;
long long int var_12 = 4008580944576454933LL;
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

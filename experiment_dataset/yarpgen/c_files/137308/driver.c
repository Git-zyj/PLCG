#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3120985943U;
unsigned int var_3 = 998029279U;
int var_4 = -253609755;
short var_9 = (short)-32258;
short var_10 = (short)4367;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
unsigned long long int var_14 = 2115217950381013118ULL;
void init() {
}

void checksum() {
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

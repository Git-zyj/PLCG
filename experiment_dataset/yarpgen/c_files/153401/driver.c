#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
long long int var_3 = 2889611120904933195LL;
unsigned short var_4 = (unsigned short)18643;
unsigned long long int var_5 = 11726421698949982599ULL;
unsigned long long int var_7 = 5315250411954672433ULL;
unsigned int var_8 = 1563299262U;
unsigned short var_9 = (unsigned short)36521;
int zero = 0;
signed char var_10 = (signed char)-69;
unsigned short var_11 = (unsigned short)35433;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

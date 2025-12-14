#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-5;
long long int var_4 = 981518637469180840LL;
long long int var_5 = -1989192897826405276LL;
unsigned long long int var_6 = 4463478946556801697ULL;
unsigned long long int var_11 = 6276019677795609561ULL;
unsigned long long int var_14 = 4709732395108939500ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)46092;
signed char var_16 = (signed char)-13;
void init() {
}

void checksum() {
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

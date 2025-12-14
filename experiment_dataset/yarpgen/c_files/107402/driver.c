#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41368;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)65436;
unsigned long long int var_9 = 14247235451757015795ULL;
short var_10 = (short)2071;
int zero = 0;
unsigned long long int var_12 = 3636625160752095111ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)32279;
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

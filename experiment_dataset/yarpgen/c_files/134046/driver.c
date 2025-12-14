#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12728940988321460892ULL;
int var_3 = -2106953009;
unsigned int var_8 = 3563549700U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)221;
int zero = 0;
int var_13 = 1785757880;
unsigned int var_14 = 3833840248U;
unsigned long long int var_15 = 3320642792093899443ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

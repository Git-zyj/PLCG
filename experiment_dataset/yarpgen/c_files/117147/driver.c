#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1173174903;
unsigned int var_4 = 3005794335U;
int var_7 = 702603657;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = 1645475577;
unsigned int var_14 = 1052367212U;
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

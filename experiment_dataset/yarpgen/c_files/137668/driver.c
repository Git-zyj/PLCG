#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
int var_2 = 1075138881;
unsigned long long int var_3 = 3763615389266542426ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_15 = (unsigned short)40121;
int zero = 0;
short var_16 = (short)9903;
unsigned long long int var_17 = 6902067269912345880ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

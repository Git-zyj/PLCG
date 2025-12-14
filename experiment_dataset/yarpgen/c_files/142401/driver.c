#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -421895354090252203LL;
unsigned long long int var_3 = 8618443657625932640ULL;
short var_4 = (short)-15030;
unsigned int var_13 = 1374830577U;
unsigned long long int var_14 = 2970446135486663644ULL;
int zero = 0;
int var_18 = -1198057380;
int var_19 = -1135287009;
unsigned int var_20 = 2519635427U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

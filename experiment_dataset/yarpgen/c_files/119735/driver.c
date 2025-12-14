#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8677116328178146310LL;
int var_2 = -470418683;
int var_3 = -1412688847;
int var_6 = 1435577977;
unsigned long long int var_9 = 12614442499778594682ULL;
int zero = 0;
int var_10 = -1840704804;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)28182;
int var_13 = 1068536851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

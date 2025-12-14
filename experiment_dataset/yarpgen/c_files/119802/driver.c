#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35668;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 16230883414161945657ULL;
unsigned short var_11 = (unsigned short)9624;
int zero = 0;
long long int var_12 = -4905800513048540766LL;
int var_13 = -342187352;
long long int var_14 = 1728070169768381017LL;
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

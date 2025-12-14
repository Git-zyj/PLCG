#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)53;
signed char var_2 = (signed char)1;
long long int var_4 = -5401432591819046763LL;
signed char var_5 = (signed char)-68;
_Bool var_7 = (_Bool)1;
long long int var_10 = -4923612456015207711LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)181;
signed char var_16 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2970450337684773366LL;
unsigned short var_5 = (unsigned short)10617;
int var_6 = 299555454;
long long int var_8 = -6405920939532812335LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)13094;
long long int var_14 = 6682896876733450942LL;
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

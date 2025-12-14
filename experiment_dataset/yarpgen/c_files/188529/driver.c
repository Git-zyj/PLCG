#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7878473975169841940LL;
long long int var_2 = 7592708990216141456LL;
long long int var_7 = -9088769378467946530LL;
long long int var_9 = 3640249741108034987LL;
long long int var_12 = -4206126474837964296LL;
long long int var_13 = 5171596285413865266LL;
int zero = 0;
long long int var_16 = 3898175572145866158LL;
long long int var_17 = -526551105827060200LL;
long long int var_18 = 8392266902765239758LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

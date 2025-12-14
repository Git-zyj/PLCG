#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8763626420562102206LL;
long long int var_9 = 5846736997374147810LL;
unsigned int var_12 = 2420910718U;
unsigned int var_13 = 355734262U;
long long int var_14 = 6745055611261911778LL;
int zero = 0;
unsigned int var_17 = 674193887U;
unsigned int var_18 = 530194228U;
unsigned int var_19 = 112817486U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

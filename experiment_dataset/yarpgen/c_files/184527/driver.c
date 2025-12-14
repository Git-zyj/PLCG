#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4921193867956802129LL;
int var_3 = -1263319168;
int var_4 = 643465040;
long long int var_5 = -441075951512553024LL;
int zero = 0;
long long int var_12 = -5075651593065583783LL;
int var_13 = 238375104;
long long int var_14 = -394051523506779800LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1541998174U;
signed char var_5 = (signed char)-17;
long long int var_6 = -615090759490486374LL;
int zero = 0;
int var_10 = 1586282139;
unsigned int var_11 = 4234560950U;
unsigned int var_12 = 1255287949U;
unsigned long long int var_13 = 16581841912644411138ULL;
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

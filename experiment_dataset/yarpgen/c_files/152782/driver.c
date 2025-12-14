#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5642778075833878101LL;
unsigned int var_1 = 4093641227U;
short var_2 = (short)12815;
long long int var_9 = 6272520033385465707LL;
unsigned long long int var_11 = 5007806319591807283ULL;
int zero = 0;
signed char var_13 = (signed char)103;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2493425674U;
unsigned short var_16 = (unsigned short)25714;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

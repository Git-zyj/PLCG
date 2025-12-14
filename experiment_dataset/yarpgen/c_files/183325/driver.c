#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11215127222538300520ULL;
signed char var_2 = (signed char)97;
long long int var_5 = -6329068408748594957LL;
unsigned long long int var_6 = 6330289383972167896ULL;
long long int var_9 = -2748080504788489768LL;
int zero = 0;
short var_11 = (short)-2509;
unsigned char var_12 = (unsigned char)228;
short var_13 = (short)-28894;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17463135519509181933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

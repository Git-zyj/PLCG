#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59907;
unsigned short var_3 = (unsigned short)29243;
signed char var_4 = (signed char)-97;
signed char var_9 = (signed char)123;
long long int var_13 = -218408760263973446LL;
long long int var_14 = 4448309758184889250LL;
int zero = 0;
unsigned int var_19 = 3180340179U;
unsigned int var_20 = 1319290190U;
long long int var_21 = 3711494952116754430LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

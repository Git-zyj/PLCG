#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34708;
long long int var_6 = -4133158540951776264LL;
unsigned short var_14 = (unsigned short)46349;
int zero = 0;
int var_19 = -1455451243;
long long int var_20 = 117303799976268817LL;
unsigned long long int var_21 = 16974635579660704370ULL;
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

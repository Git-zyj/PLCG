#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8721734148025262275LL;
unsigned long long int var_5 = 12765114025934724843ULL;
unsigned char var_8 = (unsigned char)156;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -1370180501;
signed char var_11 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

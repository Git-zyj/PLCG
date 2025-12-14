#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 343998542U;
signed char var_3 = (signed char)76;
unsigned long long int var_8 = 10794098544477072929ULL;
int var_9 = 995693380;
int zero = 0;
unsigned long long int var_11 = 4975421054858752627ULL;
signed char var_12 = (signed char)10;
long long int var_13 = 6885115645034071930LL;
void init() {
}

void checksum() {
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

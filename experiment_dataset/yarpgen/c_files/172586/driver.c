#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
signed char var_6 = (signed char)-38;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_17 = 296352779;
unsigned long long int var_18 = 13102879217869959082ULL;
unsigned int var_19 = 1390420839U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17104403529166098276ULL;
unsigned char var_5 = (unsigned char)78;
unsigned int var_8 = 1148738576U;
signed char var_9 = (signed char)-56;
int zero = 0;
unsigned char var_13 = (unsigned char)94;
int var_14 = -1860519690;
unsigned long long int var_15 = 7163091613530847894ULL;
void init() {
}

void checksum() {
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

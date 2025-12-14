#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5389176026659803011ULL;
unsigned long long int var_4 = 14638082588867389741ULL;
signed char var_6 = (signed char)89;
int var_8 = -436509150;
int var_9 = 67535285;
int zero = 0;
int var_11 = 225496149;
int var_12 = 942793260;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

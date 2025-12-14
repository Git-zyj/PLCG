#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6139482344719177922ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)14753;
unsigned int var_9 = 1999012910U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 841378742215716902ULL;
unsigned long long int var_14 = 7513870804996443872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7482667718037587697LL;
long long int var_4 = 5373454635670560998LL;
unsigned int var_5 = 1635770683U;
long long int var_6 = -3393403998929248337LL;
unsigned int var_7 = 2847323673U;
long long int var_9 = 3108869847078061328LL;
int zero = 0;
unsigned int var_11 = 1781545129U;
long long int var_12 = -5055102944673350689LL;
unsigned int var_13 = 4110233224U;
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

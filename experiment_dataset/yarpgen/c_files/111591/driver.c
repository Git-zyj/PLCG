#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16818661423291097036ULL;
long long int var_2 = -3948106990868688090LL;
unsigned int var_3 = 722936736U;
unsigned long long int var_4 = 17079440613436506988ULL;
long long int var_5 = 6404185504036815033LL;
int var_8 = 526144709;
int var_9 = 78843302;
int zero = 0;
long long int var_10 = -3855453924362410944LL;
int var_11 = -1566070091;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5864046117206092443LL;
unsigned long long int var_9 = 15212405051374585946ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)20016;
unsigned char var_20 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

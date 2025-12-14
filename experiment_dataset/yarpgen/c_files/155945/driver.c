#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-3440;
unsigned short var_8 = (unsigned short)45376;
long long int var_11 = 6239985297809801592LL;
long long int var_14 = -8619615905529161688LL;
int zero = 0;
unsigned short var_16 = (unsigned short)25757;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8427290077491510962ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10085406210121261897ULL;
unsigned int var_3 = 4087200797U;
unsigned int var_4 = 1064059791U;
short var_5 = (short)28573;
unsigned long long int var_8 = 1218719841734141733ULL;
long long int var_9 = 2598637632929199113LL;
unsigned short var_10 = (unsigned short)58547;
unsigned int var_15 = 2995302414U;
int zero = 0;
long long int var_16 = 1342395076063779064LL;
long long int var_17 = -3746710440288016545LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned int var_1 = 2624085560U;
signed char var_7 = (signed char)-63;
int var_9 = -831405385;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4074698441399137650ULL;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned char var_13 = (unsigned char)43;
long long int var_14 = 1605280876523983910LL;
long long int var_15 = 6696146978532176308LL;
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

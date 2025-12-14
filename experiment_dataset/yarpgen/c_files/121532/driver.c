#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)60;
long long int var_7 = -5733478043217873201LL;
unsigned long long int var_10 = 6901152136143407781ULL;
long long int var_11 = -4445295099111629774LL;
unsigned int var_12 = 3134617557U;
signed char var_14 = (signed char)67;
int zero = 0;
unsigned char var_17 = (unsigned char)109;
unsigned char var_18 = (unsigned char)11;
unsigned long long int var_19 = 3363387514424630627ULL;
unsigned long long int var_20 = 8352992682035682105ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

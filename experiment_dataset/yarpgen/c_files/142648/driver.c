#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned int var_3 = 2821846775U;
short var_4 = (short)8338;
long long int var_5 = -216537014068633546LL;
short var_8 = (short)13847;
long long int var_10 = -3623940174230876662LL;
unsigned short var_12 = (unsigned short)41486;
unsigned char var_13 = (unsigned char)64;
unsigned long long int var_15 = 9362998464765384245ULL;
int zero = 0;
int var_19 = 762974572;
unsigned int var_20 = 3417704459U;
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

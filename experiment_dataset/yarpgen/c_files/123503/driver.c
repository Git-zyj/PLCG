#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4121713520U;
long long int var_3 = 3949491450535397584LL;
signed char var_4 = (signed char)-86;
short var_6 = (short)32450;
unsigned int var_7 = 2162897608U;
int zero = 0;
long long int var_12 = -4122896979467927042LL;
int var_13 = 1457662300;
unsigned char var_14 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

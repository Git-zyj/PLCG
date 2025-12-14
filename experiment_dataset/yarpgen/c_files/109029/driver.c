#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
unsigned long long int var_4 = 15999247409100830781ULL;
short var_7 = (short)14255;
signed char var_8 = (signed char)-28;
unsigned int var_10 = 1365927332U;
long long int var_11 = -7073014798417897314LL;
unsigned int var_12 = 1020118612U;
unsigned long long int var_13 = 15790254683282119629ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)40484;
unsigned long long int var_20 = 12058181443102258592ULL;
unsigned int var_21 = 1196911919U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

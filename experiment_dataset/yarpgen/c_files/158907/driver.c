#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23083;
unsigned long long int var_4 = 7752668464175817932ULL;
short var_5 = (short)26357;
unsigned long long int var_6 = 13710771046744466632ULL;
signed char var_7 = (signed char)-90;
unsigned long long int var_12 = 12484401008587577671ULL;
short var_14 = (short)5937;
unsigned int var_16 = 739364088U;
int zero = 0;
unsigned int var_17 = 1748473756U;
unsigned long long int var_18 = 9085264421414199709ULL;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

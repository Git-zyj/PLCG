#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1871615259U;
signed char var_1 = (signed char)-60;
long long int var_5 = -1955783202325490940LL;
unsigned long long int var_8 = 5772032662289503541ULL;
int zero = 0;
long long int var_11 = -6429646902343715004LL;
unsigned long long int var_12 = 9981663425397397180ULL;
unsigned char var_13 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13487819785509826029ULL;
unsigned int var_3 = 1027847090U;
signed char var_6 = (signed char)-61;
unsigned char var_7 = (unsigned char)114;
unsigned long long int var_8 = 6616082603841198394ULL;
int zero = 0;
unsigned long long int var_12 = 14008825532854930609ULL;
long long int var_13 = -5346874693456795785LL;
void init() {
}

void checksum() {
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

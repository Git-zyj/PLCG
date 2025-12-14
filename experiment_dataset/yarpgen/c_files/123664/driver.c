#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32013;
short var_3 = (short)-12220;
short var_4 = (short)-21460;
short var_5 = (short)-5352;
short var_6 = (short)-27903;
short var_8 = (short)17422;
short var_10 = (short)3184;
short var_11 = (short)9181;
int zero = 0;
short var_12 = (short)19442;
short var_13 = (short)-12112;
short var_14 = (short)25118;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 254243571;
int var_2 = 1793206851;
int var_3 = -737606632;
int var_4 = -982622605;
int var_7 = -2087127018;
int var_8 = 103146202;
int var_9 = -151649684;
int var_11 = 1967084384;
int var_12 = -1135762911;
int var_13 = 402601868;
int zero = 0;
int var_18 = 1821296810;
int var_19 = -615977274;
int var_20 = -1546968499;
int var_21 = -5547024;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

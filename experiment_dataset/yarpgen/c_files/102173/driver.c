#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65096;
unsigned long long int var_8 = 13883349374212611957ULL;
unsigned long long int var_9 = 9119221979909642365ULL;
unsigned long long int var_11 = 3650100934273701118ULL;
unsigned short var_16 = (unsigned short)38855;
unsigned long long int var_17 = 7324571657897338754ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)57055;
unsigned long long int var_21 = 14074051117461804285ULL;
void init() {
}

void checksum() {
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

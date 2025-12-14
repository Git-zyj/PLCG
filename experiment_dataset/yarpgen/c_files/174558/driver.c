#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51000;
unsigned long long int var_6 = 2512244564921525064ULL;
unsigned char var_8 = (unsigned char)35;
unsigned long long int var_13 = 10078853202158570527ULL;
int zero = 0;
unsigned int var_17 = 3115495399U;
unsigned long long int var_18 = 10559273671829569759ULL;
unsigned char var_19 = (unsigned char)86;
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

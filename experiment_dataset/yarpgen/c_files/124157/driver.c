#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17212459797407974587ULL;
short var_4 = (short)18148;
unsigned char var_11 = (unsigned char)25;
unsigned long long int var_12 = 4513548989644257987ULL;
unsigned long long int var_14 = 12041934385237022330ULL;
short var_15 = (short)6090;
short var_18 = (short)23324;
int zero = 0;
unsigned long long int var_19 = 18301447621705935163ULL;
unsigned long long int var_20 = 4055634028036933937ULL;
unsigned char var_21 = (unsigned char)8;
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

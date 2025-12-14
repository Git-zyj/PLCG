#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned char var_8 = (unsigned char)0;
int zero = 0;
unsigned short var_11 = (unsigned short)45183;
unsigned long long int var_12 = 3577800681344094315ULL;
unsigned char var_13 = (unsigned char)140;
unsigned long long int var_14 = 11094827731973584199ULL;
unsigned long long int var_15 = 6712531363843802330ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

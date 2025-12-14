#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25043;
unsigned int var_7 = 1244249521U;
unsigned int var_8 = 3457676095U;
long long int var_12 = -260586475270380333LL;
unsigned short var_13 = (unsigned short)35380;
unsigned char var_14 = (unsigned char)245;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
long long int var_18 = 6998307364139408890LL;
signed char var_19 = (signed char)-58;
int var_20 = 1383061838;
signed char var_21 = (signed char)-102;
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

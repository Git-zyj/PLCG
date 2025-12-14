#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 135275412;
unsigned char var_8 = (unsigned char)4;
unsigned long long int var_14 = 5798563838817236468ULL;
int zero = 0;
short var_17 = (short)14897;
int var_18 = 519564102;
int var_19 = -815472511;
int var_20 = -244323542;
unsigned short var_21 = (unsigned short)26862;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 597560176;
int var_4 = -1245935451;
unsigned short var_7 = (unsigned short)48763;
int var_9 = -1761951524;
short var_12 = (short)27268;
unsigned short var_13 = (unsigned short)57760;
short var_16 = (short)5374;
int zero = 0;
int var_18 = -1120683611;
unsigned short var_19 = (unsigned short)56349;
short var_20 = (short)31595;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

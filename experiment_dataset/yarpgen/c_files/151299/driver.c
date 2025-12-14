#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15757030719162356173ULL;
unsigned short var_4 = (unsigned short)13370;
signed char var_6 = (signed char)73;
signed char var_7 = (signed char)-28;
long long int var_8 = -8772451648766827423LL;
unsigned short var_14 = (unsigned short)24224;
int zero = 0;
unsigned char var_17 = (unsigned char)138;
signed char var_18 = (signed char)115;
int var_19 = 2043359737;
unsigned short var_20 = (unsigned short)21183;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

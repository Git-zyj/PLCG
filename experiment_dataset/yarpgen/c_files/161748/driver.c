#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 773580194;
unsigned long long int var_4 = 16078573263015126706ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)234;
_Bool var_14 = (_Bool)0;
int var_18 = 1189330959;
short var_19 = (short)15327;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
unsigned char var_21 = (unsigned char)138;
short var_22 = (short)11325;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

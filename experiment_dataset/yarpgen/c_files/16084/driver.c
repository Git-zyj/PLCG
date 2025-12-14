#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15809976573201692582ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)207;
unsigned long long int var_9 = 13803015394396232661ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)228;
signed char var_13 = (signed char)35;
unsigned long long int var_14 = 14416030669669005913ULL;
unsigned char var_15 = (unsigned char)230;
void init() {
}

void checksum() {
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

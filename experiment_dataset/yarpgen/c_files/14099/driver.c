#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -515339286513957089LL;
int var_3 = 394305225;
short var_4 = (short)18031;
long long int var_7 = 8904793686021304280LL;
unsigned char var_8 = (unsigned char)195;
short var_10 = (short)3334;
int zero = 0;
int var_13 = 57312803;
int var_14 = 1783272963;
long long int var_15 = 8496034394720367121LL;
long long int var_16 = 632079580842277097LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

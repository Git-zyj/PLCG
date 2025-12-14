#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21463;
int var_4 = -1116460406;
signed char var_7 = (signed char)-50;
unsigned short var_8 = (unsigned short)27138;
unsigned short var_10 = (unsigned short)60434;
long long int var_13 = -1928565034917893451LL;
long long int var_15 = -2744916009387021633LL;
int var_17 = 927596474;
int zero = 0;
long long int var_18 = 142997281706705094LL;
_Bool var_19 = (_Bool)0;
int var_20 = 482255988;
signed char var_21 = (signed char)29;
long long int var_22 = -4506591457920459894LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

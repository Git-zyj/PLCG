#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -411548197;
signed char var_4 = (signed char)-123;
unsigned short var_9 = (unsigned short)13870;
long long int var_12 = -4121645875130195477LL;
unsigned int var_17 = 830169980U;
int zero = 0;
unsigned long long int var_18 = 15987279993247595265ULL;
long long int var_19 = 7184967003292667091LL;
int var_20 = 660061508;
int var_21 = 466692251;
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

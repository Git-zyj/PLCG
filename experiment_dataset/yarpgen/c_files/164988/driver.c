#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5597860590388962879LL;
unsigned long long int var_5 = 323413360489264156ULL;
long long int var_7 = -5408556281118236468LL;
short var_13 = (short)7199;
int zero = 0;
unsigned long long int var_17 = 4780371949821137295ULL;
long long int var_18 = -8485845397802717410LL;
long long int var_19 = 5634906310615963474LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

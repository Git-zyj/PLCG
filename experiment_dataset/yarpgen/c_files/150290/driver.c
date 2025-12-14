#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3111163766542348338LL;
long long int var_1 = -4315841731625716378LL;
int var_6 = -1593309690;
long long int var_7 = -5530871349877241748LL;
long long int var_10 = 4225019198486970196LL;
int zero = 0;
long long int var_12 = -5158779355740095800LL;
long long int var_13 = -5128329697481207709LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

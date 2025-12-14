#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40568;
long long int var_2 = 1073152183189064147LL;
long long int var_4 = -6248738311457321398LL;
long long int var_7 = 5971197866428185381LL;
unsigned short var_8 = (unsigned short)42271;
unsigned long long int var_10 = 15911356100714250473ULL;
long long int var_16 = 3201753536174279736LL;
unsigned long long int var_17 = 10462630799484632233ULL;
int zero = 0;
long long int var_19 = -2593743516748935930LL;
unsigned int var_20 = 312203151U;
void init() {
}

void checksum() {
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

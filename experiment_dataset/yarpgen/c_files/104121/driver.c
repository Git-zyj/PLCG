#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8641942068649815662LL;
long long int var_6 = -3482348817955241882LL;
long long int var_7 = -3682543741611751904LL;
unsigned long long int var_9 = 3425408979391280480ULL;
unsigned long long int var_10 = 4503277466440521359ULL;
unsigned long long int var_12 = 12299660566536837084ULL;
unsigned short var_14 = (unsigned short)52729;
int zero = 0;
long long int var_16 = -7459172685385479819LL;
unsigned long long int var_17 = 14051354868164891152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

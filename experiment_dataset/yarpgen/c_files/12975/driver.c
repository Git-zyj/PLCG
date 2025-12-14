#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8543732500637130373ULL;
signed char var_2 = (signed char)77;
unsigned char var_4 = (unsigned char)44;
short var_10 = (short)18121;
unsigned long long int var_11 = 6005846458819813486ULL;
unsigned long long int var_12 = 11310366887704303178ULL;
unsigned long long int var_14 = 17213688672960614675ULL;
long long int var_16 = 7451378960344408197LL;
int zero = 0;
long long int var_19 = -83216615152303476LL;
unsigned char var_20 = (unsigned char)142;
int var_21 = -497299924;
void init() {
}

void checksum() {
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

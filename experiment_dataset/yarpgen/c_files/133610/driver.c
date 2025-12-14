#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 299536232799370337ULL;
unsigned long long int var_3 = 16711338214156400015ULL;
unsigned long long int var_5 = 15585270171616841076ULL;
unsigned long long int var_8 = 9778063676260052819ULL;
unsigned long long int var_10 = 11780131563697649022ULL;
int zero = 0;
unsigned long long int var_12 = 5197844412453008231ULL;
unsigned long long int var_13 = 594667989044741402ULL;
unsigned long long int var_14 = 11161325731405223477ULL;
unsigned long long int var_15 = 9210423673407257378ULL;
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

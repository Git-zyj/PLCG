#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 178519674;
int var_7 = -1343533881;
int var_11 = -1143305556;
int var_12 = -911620177;
int var_15 = 850413835;
int zero = 0;
int var_18 = -1267841050;
int var_19 = -506171349;
int var_20 = 340187160;
int var_21 = -1118895376;
int var_22 = -1409099386;
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

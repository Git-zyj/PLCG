#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1419611494;
unsigned long long int var_1 = 3911328544759195622ULL;
int var_3 = -1514889980;
unsigned long long int var_4 = 3034626243891253205ULL;
int var_5 = -525113858;
int var_6 = 339812018;
int var_9 = 827426850;
int zero = 0;
unsigned long long int var_11 = 8288281305334721765ULL;
unsigned long long int var_12 = 17074535667668325432ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

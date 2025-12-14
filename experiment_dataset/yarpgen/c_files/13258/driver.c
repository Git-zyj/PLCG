#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)22411;
int var_7 = -1469706524;
unsigned long long int var_9 = 8520299795887994268ULL;
int zero = 0;
long long int var_11 = 6440689147506220501LL;
long long int var_12 = 3367022297989342179LL;
unsigned short var_13 = (unsigned short)1041;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

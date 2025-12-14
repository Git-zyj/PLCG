#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3223522123103548917ULL;
unsigned long long int var_2 = 16407004901364627062ULL;
unsigned int var_6 = 2612480949U;
unsigned int var_7 = 1537740834U;
unsigned long long int var_9 = 466355110697362442ULL;
unsigned long long int var_10 = 5456390597393992946ULL;
int zero = 0;
unsigned int var_11 = 633192999U;
unsigned int var_12 = 3316595784U;
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

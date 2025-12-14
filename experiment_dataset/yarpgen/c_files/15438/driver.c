#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3010268561074632743LL;
long long int var_4 = 987840199980599650LL;
unsigned long long int var_7 = 13768515685157545213ULL;
signed char var_11 = (signed char)98;
int zero = 0;
signed char var_12 = (signed char)-45;
int var_13 = 1398119219;
long long int var_14 = 7769750830575876752LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

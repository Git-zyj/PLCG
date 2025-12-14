#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1721612701649813283ULL;
unsigned long long int var_5 = 11395922708006260385ULL;
signed char var_7 = (signed char)120;
unsigned long long int var_8 = 18112470907470080673ULL;
unsigned long long int var_9 = 11779506291326237710ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = -1320319942;
unsigned long long int var_13 = 13216520159230233402ULL;
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

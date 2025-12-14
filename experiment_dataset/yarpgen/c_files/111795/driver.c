#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7717845510280205181LL;
unsigned int var_11 = 1006817127U;
int zero = 0;
unsigned int var_12 = 2905346733U;
long long int var_13 = -780981391124486443LL;
long long int var_14 = 5322225872364379447LL;
unsigned int var_15 = 4289353324U;
unsigned long long int var_16 = 7230709812244269180ULL;
long long int var_17 = -2214158260530394878LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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

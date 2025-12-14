#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21277;
unsigned long long int var_1 = 6845023025984383780ULL;
unsigned long long int var_2 = 15030737609722068511ULL;
unsigned char var_3 = (unsigned char)232;
unsigned long long int var_4 = 7692489126455812384ULL;
short var_9 = (short)-25496;
int zero = 0;
signed char var_10 = (signed char)89;
int var_11 = -1110850197;
long long int var_12 = -385475248996838599LL;
long long int var_13 = 6324730386188125283LL;
unsigned int var_14 = 1494987330U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

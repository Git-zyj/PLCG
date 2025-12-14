#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16463;
unsigned long long int var_2 = 9609690649891974409ULL;
short var_3 = (short)25253;
short var_4 = (short)-2439;
short var_7 = (short)-29580;
unsigned long long int var_8 = 955893425687819739ULL;
unsigned long long int var_10 = 12552450817511959256ULL;
unsigned long long int var_11 = 9797950507615692739ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)223;
unsigned long long int var_13 = 16527345391148871989ULL;
long long int var_14 = -521843260991108116LL;
short var_15 = (short)-9582;
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

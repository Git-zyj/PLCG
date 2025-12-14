#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27219;
short var_10 = (short)-3853;
int zero = 0;
long long int var_13 = -7128334997086799334LL;
unsigned long long int var_14 = 2718900758724342953ULL;
unsigned long long int var_15 = 17424231960600575235ULL;
void init() {
}

void checksum() {
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

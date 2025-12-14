#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-39;
unsigned short var_4 = (unsigned short)51506;
short var_5 = (short)-12109;
short var_6 = (short)-9082;
unsigned long long int var_8 = 1318658037726261930ULL;
int zero = 0;
unsigned int var_13 = 3098200873U;
short var_14 = (short)-11487;
signed char var_15 = (signed char)100;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7152484489293710275LL;
unsigned long long int var_2 = 12803426409098594622ULL;
long long int var_7 = -6791588944226576441LL;
int zero = 0;
unsigned short var_11 = (unsigned short)10332;
long long int var_12 = -3146430424846681113LL;
long long int var_13 = -7943528711509025691LL;
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

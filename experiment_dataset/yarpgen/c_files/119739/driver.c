#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8915029448595653462ULL;
unsigned long long int var_2 = 3417064705841852283ULL;
unsigned long long int var_5 = 1343791928578457549ULL;
unsigned long long int var_8 = 6027207627039383585ULL;
unsigned long long int var_9 = 16761043563522022379ULL;
int zero = 0;
unsigned long long int var_12 = 10341468885826561048ULL;
unsigned long long int var_13 = 18348154486330941612ULL;
unsigned long long int var_14 = 11934038127731246387ULL;
unsigned long long int var_15 = 1214606378625207280ULL;
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

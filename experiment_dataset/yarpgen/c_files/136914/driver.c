#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 10508053487959241385ULL;
unsigned long long int var_5 = 5745268661482537951ULL;
unsigned int var_7 = 3602094801U;
long long int var_9 = 6006698399010200881LL;
int zero = 0;
unsigned short var_11 = (unsigned short)41755;
signed char var_12 = (signed char)-72;
long long int var_13 = -2409360056643515055LL;
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

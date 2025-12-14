#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7903624810148990439LL;
unsigned int var_4 = 2183702798U;
long long int var_6 = 5453537068154880522LL;
short var_7 = (short)19932;
unsigned char var_9 = (unsigned char)176;
int zero = 0;
int var_12 = 1220938820;
unsigned long long int var_13 = 17855739314753122765ULL;
long long int var_14 = -189222666538247689LL;
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

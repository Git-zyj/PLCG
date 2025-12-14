#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16495594663501167428ULL;
unsigned short var_3 = (unsigned short)41851;
unsigned long long int var_15 = 10310966386031611426ULL;
int zero = 0;
unsigned long long int var_18 = 16330835296980712029ULL;
unsigned long long int var_19 = 4972458332704050043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
